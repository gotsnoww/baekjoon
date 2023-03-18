#include <stdio.h>
#include <string.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int count = 0;
	//char false[101] = "";
	for (int i = 0; i < n; i++) {
		char word[101] = "";
		scanf("%s", word);
		
		/* 중복 단어 카운트 x
		if (strcmp(word, false) == 0) {
			count++;
			continue;
		}
		
		strcpy(false, word);
		*/

		int cnt = 1;
		for (int j = 0; word[j] != '\0'; j++) {
			if (word[j] != word[j + 1]) {
				for (int k = j + 2; word[k] != '\0'; k++) {
					if (word[k] == word[j] && cnt == 1) {
						count++;
						cnt++;
						break;
					}
				}
			}
		}
	}

	printf("%d", n - count);

	return 0;
}