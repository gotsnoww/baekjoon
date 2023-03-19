#include <stdio.h>

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int n1, n2;
	n1 = w - x;
	n2 = h - y;

	int num1, num2;
	num1 = (n1 > n2) ? n2 : n1;
	num2 = (x > y) ? y : x;

	int result;
	result = (num1 > num2) ? num2 : num1;

	printf("%d\n", result);

	return 0;
}