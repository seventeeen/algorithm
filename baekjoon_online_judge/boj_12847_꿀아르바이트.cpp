/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12847
 *
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
	int n, m, arr[100000];
	unsigned long long int max, sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < m; i++)
		sum += arr[i];
	int k = n - m;
	max = sum;
	for (int i = 0; i < k; i++) {
		sum -= arr[i];
		sum += arr[i + m];
		if (sum > max)
			max = sum;
	}
	cout << max;
	return 0;
}
