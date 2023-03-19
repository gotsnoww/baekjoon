#include <stdio.h>

int main() {
	int n = 0;

	int count = 0;
	for (int i = 1; i < 9; i++) {
		scanf("%d", &n);

		if (n == i)
			count++;
		else if (n == (9 - i))
			count--;
	}

	if (count == 8 || count == -8) {
		if (count > 0)
			printf("ascending");
		else
			printf("descending");
	}
	else
		printf("mixed");
}