#include <stdio.h>

int main() {
	int t_case = 0;
	scanf("%d", &t_case);

	for (int i = 0; i < t_case; i++)
	{
		int s_num = 0;
		scanf("%d", &s_num);
		int total = 0;
		int s_score[1001] = { 0 };
		double avarage = 0;

		for (int j = 0; j < s_num; j++)
		{
			scanf("%d", &s_score[j]);
			total += s_score[j];
		}
		avarage = (double)total / (double)s_num;

		int count_num = 0;

		for (int k = 0; k < s_num; k++) {
			if (s_score[k] > avarage) {
				count_num++;
			}
		}

		printf("%.3f%%\n", (double)count_num / (double)s_num * 100);
	}

	return 0;
}