#include <stdio.h>
#include <string.h>
#define M 1234567891

int main() {
	int L;
	char apb[51] = { 0 };

	scanf("%d", &L);
	scanf("%s", apb);

	long long H = 0;
	long long r = 1;

	int str_length = strlen(apb);
	for (int i = 0; i < str_length; i++) {
		H += ((apb[i] - 96) * r) % M;
		r = (r * 31) % M;
	}

	printf("%lld", H % M);

	return 0;
}