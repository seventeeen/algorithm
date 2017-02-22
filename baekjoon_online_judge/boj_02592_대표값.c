/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2592
 *
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct ary {
	int val;
	int num;
}array;

int compare(const void* fst, const void* sec) {
	int val1, val2, sum = 0;;
	val1 = ((array*)fst)->val;
	val2 = ((array*)sec)->val;
	return val2 - val1;
}
int main() {
	int i, x, sum = 0;
	array arr[101] = { 0, };
	for (i = 0; i < 10; i++) {
		scanf("%d", &x);
		arr[x / 10].val++;
		arr[x / 10].num = x / 10;
	}
	qsort(arr+1, 100, sizeof(array), compare);

	for (i = 1; i <= 10; i++)
		sum += arr[i].val*arr[i].num;

	printf("%d\n%d", sum, arr[1].num*10);
	

	return 0;
}
