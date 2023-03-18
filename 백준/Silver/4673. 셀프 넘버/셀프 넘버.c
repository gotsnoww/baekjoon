#include <stdio.h>

int self_num(int n);

int arr[10001] = { 0 };
int arr_fi[10000] = { 0 };

int main() {
	for(int i = 1; i < 10000; i++)
		arr[i] = self_num(i);

	for (int i = 1; i < 10000; i++) {
		int count = 0;
		for (int j = 0; j < 10000; j++) {
			if (i == arr[j]) {
				count++;
			}
		}
		if (count == 0)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}

int self_num(int n) {
	int th, hun, ten, one, result = 0;
	th = n / 1000; 
	hun = (n / 100) % 10;
	ten = (n / 10) % 10;
	one = n % 10;

	result = n + th + hun + ten + one;

	return result;
}