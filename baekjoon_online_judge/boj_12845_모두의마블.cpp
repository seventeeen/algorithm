/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12845
 *
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {

	int n, arr[1000];
	cin >> n;
	int max = -1, sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	if (n > 1)
		sum += max*(n - 2);
	else
		sum = 0;
	cout << sum;
	return 0;
}
