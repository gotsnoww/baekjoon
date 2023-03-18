#include <stdio.h>
#include <stdlib.h>

void merge(int* arr, int* sarr, int left, int mid, int right);
void merge_sort(int* arr, int* sarr, int left, int right);

int main() {
	int n = 0;
	scanf("%d", &n);

	//배열 크기 때문에 stack overflow 발생
	int* arr = (int*)malloc(sizeof(int) * n); //메모리 동적할당 -> heap 영역 사용
	int* sarr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) 
		scanf("%d", &arr[i]);
	
	merge_sort(arr, sarr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	free(arr);

	return 0;
}

void merge_sort(int* arr, int* sarr, int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(arr, sarr, left, mid);
		merge_sort(arr, sarr, mid + 1, right);
		merge(arr, sarr, left, mid, right);
	}
}

void merge(int* arr, int* sarr, int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j])
			sarr[k++] = arr[i++];
		else
			sarr[k++] = arr[j++];
	}

	if (i > mid) {
		for (l = j; l <= right; l++)
			sarr[k++] = arr[l];
	}
	else {
		for (l = i; l <= mid; l++)
			sarr[k++] = arr[l];
	}

	for (l = left; l <= right; l++)
		arr[l] = sarr[l];
}