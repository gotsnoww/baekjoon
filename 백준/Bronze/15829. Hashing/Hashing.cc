#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int L;
	char apb[51] = { 0 };

	scanf("%d", &L);
	scanf("%s", apb);

	int H = 0;
	int M = 1234567891;
	int r = 31;

	int str_length = strlen(apb);
	for (int i = 0; i < str_length; i++) {
		H += ((apb[i] - 96) * (int)pow(r, i)) % M;
	}

	printf("%d", H);

	return 0;
}