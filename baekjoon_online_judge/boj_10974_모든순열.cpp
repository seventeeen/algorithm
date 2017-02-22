/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10974
 *
 */

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

void construct(int result[], int c[], int k, int n, int *ncand) {
	bool in_perm[9] = { false, };
	for (int i = 0; i < k; i++) in_perm[result[i]] = true;

	*ncand = 0;
	for (int i = 1; i <= n; i++) {
		if (!in_perm[i]) {
			c[*ncand] = i;
			*ncand += 1;
		}
	}
}

void backtrack(int result[], int k, int n) {
	int c[8];
	int ncand;
	if (k == n) {
		for (int i = 0; i < n; i++)
			cout << result[i] << " ";
		cout << "\n";
	}
	else {
		construct(result, c, k, n, &ncand);
		for (int i = 0; i < ncand; i++) {
			result[k] = c[i];
			backtrack(result, k+1, n);
		}
	}
}

int main(void) {
	int result[8] = { 0, };
	int n;
	cin >> n;
	backtrack(result, 0, n);
	return 0;
}
