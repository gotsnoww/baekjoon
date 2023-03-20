#include <stdio.h>

int main() {
	int result = 0;
	int e[3] = { 0 };
	while (1) {
		scanf("%d %d %d", &e[0], &e[1], &e[2]);
		if (e[0] == 0 && e[1] == 0 && e[2] == 0)
			break;
		
		int temp = 0;
		for (int i = 0; i < 2; i++) {
			if (e[i] > e[i + 1]) {
				temp = e[2];
				e[2] = e[i];
				e[i] = temp;
			}
		}
		
		result = e[0] * e[0] + e[1] * e[1];

			if (result == (e[2] * e[2]))
			printf("right\n");
		else
			printf("wrong\n");
	}

	return 0;
}