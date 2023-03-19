#include <stdio.h>

int main() {
	int t = 0;
	scanf("%d", &t);

	int h = 0, w = 0, n = 0;
	int num, floor, room;

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		
		num = n / h + 1;
		floor = n % h;
		if (floor == 0) {
			floor = h;
			num--;
		}
		room = num + (floor * 100);
		printf("%d\n", room);
	}
	
	return 0;
}