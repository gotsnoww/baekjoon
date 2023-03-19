#include <stdio.h>
#include <string.h>

char word[1000000];
int main() {
	scanf("%s", word);

	int cnt[91] = { 0 };
	for (int i = 0; i < 1000000; i++) //알파벳별 개수 삽입
	{
		for (int j = 65; j <= 90; j++) {
			if (word[i] == j || word[i] == j + 32)
				cnt[j]++;
		}
	}

	int max = 0;
	int result = 0;
	int count = 0;

	for (int j = 65; j <= 90; j++) {  //알파벳 출력
		if (cnt[j] > max) {
			max = cnt[j];
			result = j;
			cnt[j] = 0;
		}
	}

	for (int j = 65; j <= 90; j++) { //? 출력
		if (cnt[j] == max) {
			max = cnt[j];
			result = 63;
		}
	}

	printf("%c\n", result);

	return 0;
}