/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5635
 *
 */

#include<stdio.h>
#include<stdlib.h>
#define HUN 100
typedef struct {
	int value;
	char name[20];
}object;
int compare(const void* fst, const void* snd) {
	int val1, val2;
	val1 = ((object*)fst)->value;
	val2 = ((object*)snd)->value;
	return val2 - val1;
}
int main(void){
	int N, i, y, m, d;
	object arr[100] = { 0, };
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%s %d %d %d", &arr[i].name, &d, &m, &y);
		arr[i].value = d + m*HUN + y*HUN*HUN;
	}
	qsort(arr, N, sizeof(object), compare);
	printf("%s\n%s", arr[0].name, arr[N - 1].name);
	return 0;
}
