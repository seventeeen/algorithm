/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5544
 *
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int num;
	int rank;
	int score;
}table;
int compare_A(void const* fst, void const*snd) {
	int val1, val2;
	val1 = ((table*)fst)->score;
	val2 = ((table*)snd)->score;
	return val2 - val1;
}
int compare_B(void const* fst, void const*snd) {
	int num1, num2;
	num1 = ((table*)fst)->num;
	num2 = ((table*)snd)->num;
	return num1 - num2;
}
int main(void) {
	table result[101] = { 0, };
	int N, i, a, b, a_score, b_score;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
		result[i].num = i;
	for (i = 1; i <= N*(N - 1) >> 1; i++) {
		scanf("%d %d %d %d", &a, &b, &a_score, &b_score);
		if (a_score != b_score)
			result[(a_score > b_score) ? a : b].score += 3;
		else {
			result[a].score++;
			result[b].score++;
		}
	}
	qsort(result + 1, N, sizeof(table), compare_A);
    result[0].rank = -1;
	for (i = 1; i <= N; i++) {
		if (result[i].score == result[i - 1].score)
			result[i].rank = result[i - 1].rank;
		else
			result[i].rank = i;
	}
	qsort(result + 1, N, sizeof(table), compare_B);
	for (i = 1; i <= N; i++) {
		printf("%d\n", result[i].rank);
	}
	return 0;
}
