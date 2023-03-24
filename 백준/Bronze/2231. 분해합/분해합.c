#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);

	int n1, n2, n3, n4, n5, n6, n7;
	int result, temp = 1000001;
	for (int i = 0; i < n+1; i++) {
		n1 = i / 1000000;
		n2 = (i / 100000) % 10;
		n3 = (i / 10000) % 10;
		n4 = (i / 1000) % 10;
		n5 = (i / 100) % 10;
		n6 = (i / 10) % 10;
		n7 = i % 10;

		result = i + n1 + n2 + n3 + n4 + n5 + n6 + n7;
		if (result == n)
			temp = (temp > i) ? i : temp;
	}

	if(temp == 1000001)
		printf("0");
	else
		printf("%d", temp);

	return 0;
}