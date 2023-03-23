#include <stdio.h>

int bee(int n);

int main() {
	int n = 0;
	scanf("%d", &n);

	/*
	1 무조건 포함
	    1
		2~7
		8~19
		20~37
		38~61
		62~91
		92~127
	*/

	int count = 0;
	count = bee(n);
	printf("%d", count);

	return 0;
}

int bee(int n) { 
	static int i = 0;
	i++;
	
	if (n == 1)
		return i;
	
	n -= 6 * i;

	if (n <= 0)
		return (i + 1);
	
	bee(n);
}
