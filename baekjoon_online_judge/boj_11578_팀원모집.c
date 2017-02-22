/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11578
 *
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int qst[11];
}table;
int *makearr(int n) {
	return (int*)calloc(n+1, sizeof(int));
}
int check_solution(int m, int k) {
	return k == m;
}
void try_solution(int *sol, table *arr, int *min, int k, int n, int m) {
	int *temp = makearr(n);
	int i, j, co=0;
	for (i = 1; i <= m; i++) {
		if (sol[i]) {
			co++;
			for (j = 1; j <= n; j++) {
				if (arr[i].qst[j]) {
					temp[j] = 1;
				}
			}
		}
	}
	for (i = 1; i <= n; i++)
		if (!temp[i]) return;
	if (co < *min)
		*min = co;
}
void backtrack(int* sol, table* arr, int *min, int n, int k, int m) {
	int i;
	if (check_solution(m, k)) {
		try_solution(sol, arr, min, k, n, m);
	}
	else{
		k++;
		for (i = 0; i < 2; i++) {
			sol[k] = i;
			backtrack(sol, arr, min, n, k, m);
		}
	}
}
int main(void) {
	int n, m, o, min=100;
	int i, j, x, k=0;
	table arr[11] = { 0, };
	int *sol;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= m; i++) {
		scanf("%d", &o);
		for (j = 0; j < o; j++) {
			scanf("%d", &x);
			arr[i].qst[x] = 1;
		}
	}
	sol = makearr(m);
	backtrack(sol, arr, &min, n, k, m);
	if (min == 100)
		printf("-1");
	else
		printf("%d", min);
	return 0;
}
