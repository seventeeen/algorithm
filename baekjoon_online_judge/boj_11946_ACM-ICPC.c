/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11946
 *
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct sco {
	int qst;
	int time;
	int num;
} score;
score arr[10001] = { 0, };

int compare(const void* fst, const void* sec) {
	int q1, q2, t1, t2, n1, n2;
	q1 = ((score*)fst)->qst;
	q2 = ((score*)sec)->qst;
	t1 = ((score*)fst)->time;
	t2 = ((score*)sec)->time;
	n1 = ((score*)fst)->num;
	n2 = ((score*)sec)->num;
	if (q2 - q1 != 0) return q2 - q1;
	else {
		if (t1 - t2 != 0) return t1 - t2;
		else return n1 - n2;
	}
}
int main() {
	int n, m, q, i, x, y, minute, check[101][16] = { 0, };
	char log[10];
	scanf("%d %d %d", &n, &m, &q);
	for (i = 1; i <= n; i++)
		arr[i].num = i;
	for (i = 0; i < q; i++) {
		scanf("%d %d %d %s", &minute, &x, &y, log);
		if (check[x][y] != -1) {
			if (log[0] == 'A') {
				arr[x].qst++;
				arr[x].time += check[x][y] + minute;
				check[x][y] = -1;
			}
			else check[x][y] += 20;
		}
	}
	qsort(arr + 1, n, sizeof(score), compare);
	for(i=1; i<=n; i++)
		printf("%d %d %d\n", arr[i].num, arr[i].qst, arr[i].time);
	return 0;
}
