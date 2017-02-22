/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10814
 *
 */

#include<stdio.h>
#include<stdlib.h>
struct people {
	int age;
	int num;
	char str[101];
};
int compare(const void *a, const void *b) {
	int fst1, fst2, sec1, sec2;
	fst1 = ((struct people*)a)->age;
	fst2 = ((struct people*)b)->age;
	sec1 = ((struct people*)a)->num;
	sec2 = ((struct people*)b)->num;
	if (fst1 - fst2 != 0)
		return fst1 - fst2;
	else {
		return sec1 - sec2;
	}
}
struct people arr[100000];
int main(){
	int i, N;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d %s", &arr[i].age, arr[i].str);
		arr[i].num = i;
	}

	qsort(arr, N, sizeof(struct people), compare);

	for (i = 0; i < N; i++)
		printf("%d %s\n", arr[i].age, arr[i].str);

	return 0;
}
