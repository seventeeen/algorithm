/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1920
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
int main(void) {
	int n;
	cin >> n;
	int *base = new int[n];
	for (int i = 0; i < n; i++)
		cin >> base[i];
	int m;
	cin >> m;
	int *search = new int[m];
	for (int i = 0; i < m; i++)
		cin >> search[i];
	sort(base, base + n);
	for (int i = 0; i < m; i++) {
		cout << is_in(base, search[i], n) << "\n";
	}
	return 0;
}
