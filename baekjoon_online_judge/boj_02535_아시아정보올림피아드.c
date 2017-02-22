/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2535
 *
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int contry, num, score;
}board;
int compare(const void* fst, const void* snd) {
	int val1, val2;
	val1 = ((board*)fst)->score;
	val2 = ((board*)snd)->score;
	return val2 - val1;
}
int main(void){
	board arr[100];
	int i, N, check[101] = { 0, }, cnt=0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d %d", &arr[i].contry, &arr[i].num, &arr[i].score);
	}
	qsort(arr, N, sizeof(board), compare);
	i = 0;
	while (1) {
		if (cnt == 3)
			break;
		if (check[arr[i].contry] >= 2) {
			i++;
			continue;
		}
		printf("%d %d\n", arr[i].contry, arr[i].num);
		check[arr[i].contry]++;
		cnt++;
		i++;
	}
	return 0;
}
