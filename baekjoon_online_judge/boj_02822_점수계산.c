/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2822
 *
 */

#include<stdio.h>
#include<stdlib.h>
#define RANGE 8
typedef struct {
	int score, num;
}object;
int compare_A(const void* fst, const void* snd) {
	int val1, val2, num1, num2;
	val1 = ((object*)fst)->score;
	val2 = ((object*)snd)->score;
	num1 = ((object*)fst)->num;
	num2 = ((object*)snd)->num;
	if (val1 != val2) return val2 - val1;
	else return num1 - num2;
}
int compare_B(const void* fst, const void* snd) {
	int num1, num2;
	num1 = ((object*)fst)->num;
	num2 = ((object*)snd)->num;
	return num1 - num2;
}
int main(void){
	int i, sum=0;
	object arr[8] = { 0, };
	for (i = 0; i < RANGE; i++) {
		scanf("%d", &arr[i].score);
		arr[i].num = i + 1;
	}
	qsort(arr, RANGE, sizeof(object), compare_A);
	qsort(arr, 5, sizeof(object), compare_B);
	for (i = 0; i < 5; i++)
		sum += arr[i].score;
	printf("%d\n", sum);
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i].num);
	return 0;
}
