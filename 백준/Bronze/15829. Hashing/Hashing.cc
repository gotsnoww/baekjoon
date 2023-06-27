#include <stdio.h>
#include <string.h>

int main() {
	int L;
	char apb[51] = { 0 };

	scanf("%d", &L);
	scanf("%s", apb);

	long long int H = 0;
	int M = 1234567891;
	int r = 31;

	int str_length = strlen(apb);
	for (int i = 0; i < str_length; i++) {
		int p = 1;
		for (int j = 0; j < i; j++)
			p *= r;

		H += ((apb[i] - 96) * p);
	}

	printf("%lld", H % M);

	return 0;
}