/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2776
 *
 */

#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;
int is_in(int* arr, int k, int n) {
	int left = 0, right = n-1, mid;
	while (left <= right) {
		mid = (left + right) >> 1;
		if (k > arr[mid])
			left = mid + 1;
		else if (k < arr[mid])
			right = mid - 1;
		else
			return 1;
	}
	return 0;
}
int base[1000000] = { 0, };
int main(void) {
	int T;
	for (scanf("%d", &T); T--;) {
		int n, x;
		cin >> n;
		for (int i = 0; i < n; i++)
			scanf("%d", &base[i]);
		sort(base, base + n);
		int m;
		cin >> m;
		for (int i = 0; i < m; i++) {
			scanf("%d", &x);
			printf("%d\n", is_in(base, x, n));
		}
	}
	return 0;
}
