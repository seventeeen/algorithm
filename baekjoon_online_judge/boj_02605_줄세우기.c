/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2605
 *
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct stu {
	int rank;
	int num;
}student;
int compare(const void* fst, const void* sec) {
	int ran1, ran2;
	ran1 = ((student*)fst)->rank;
	ran2 = ((student*)sec)->rank;
	return ran1 - ran2;
}
int main() {
	student arr[101] = { 0, };
	int N, i, x, j;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
		arr[i].num = i;
	for (i = 1; i <= N; i++) {
		scanf("%d", &x);
		for (j = 1; j < i; j++) {
			if (arr[j].rank >= i - x) {
				arr[j].rank++;
			}
		}
		arr[i].rank = i - x;
	}
	qsort(arr + 1, N, sizeof(student), compare);
	for (i = 1; i <= N; i++)
		printf("%d ", arr[i].num);
	return 0;
}
