#include <stdio.h>

int main() {
	int n, m;
		scanf("%d %d", &n, &m);
	
	int num[100] = { 0 }; 

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int result = 0, temp = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i+1; j < n - 1; j++) {
			for (int k = j+1; k < n; k++) {
				result = num[i] + num[j] + num[k];
				if (result > m)
					continue;

				temp = (temp < result) ? result : temp;
			}
		}
	}

	printf("%d", temp);

	return 0;
}