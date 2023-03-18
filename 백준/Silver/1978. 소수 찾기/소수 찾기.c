#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);

	int num = 0, rcnt = 0;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		scanf("%d", &num);
		for (int j = 2; j < num / 2 + 1; j++)
		{
			if (num % j == 0)
				cnt++;
		}
		if (cnt == 0 && num != 1)
		{
			rcnt++;
		}
	}

	printf("%d", rcnt);

	return 0;
}