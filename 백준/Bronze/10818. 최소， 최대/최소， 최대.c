#include <stdio.h>
#include <stdlib.h>

int Max(int* arr);
int Min(int* arr);

int n = 0;
int main() {
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int max = 0, min = 0;
	max = Max(arr);
	min = Min(arr);

	printf("%d %d", min, max);

	free(arr);

	return 0;
}

int Max(int* arr)
{
	int max = -1000001;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

int Min(int* arr)
{
	int min = 1000001;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}