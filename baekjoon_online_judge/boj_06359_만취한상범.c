/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/6359
 *
 */

#include<stdio.h>
int main(){
	int T, n, arr[101], i, j, cnt;
	for (scanf("%d", &T); T--;) {
		cnt = 0;
		for (i = 0; i < 101; i++)
			arr[i] = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			for (j = i+1; j <= n; j+=(i+1)) {
				if (arr[j] == 0)
					arr[j] = 1;
				else
					arr[j] = 0;
			}
		}
		for (i = 1; i <= n; i++) {
			if (arr[i] == 1)
				cnt++;
		}
		printf("%d\n", cnt);
    }
	return 0;
}
