#include <stdio.h>

int resultfunction(int data)
{
	int total = 0;
	total = data + data % 10;
	data /= 10;
	total += data % 10;
	data /= 10;
	total += data % 10;
	data /= 10;
	total += data;

	return total;
}

int ary1[9985] = { 0 };

int main() {
	for (int i = 0; i < 9985; i++) {
		ary1[i] = i;
	}

	for (int i = 0; i < 9985; i++) {
		int num1 = 0;
		num1 = resurtfunction(i);
		ary1[num1] += 1;
	}

	for (int i = 0; i < 9985; i++) {
		if (ary1[i] == i) {
			printf("%d\n", ary1[i]);
		}
	}

	return 0;
}