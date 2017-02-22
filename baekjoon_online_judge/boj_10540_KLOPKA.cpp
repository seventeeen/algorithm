/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10540
 *
 */

#include <iostream>
#include <cstdio>

using namespace std;

#define BIG(a, b) (a>b ? a : b)

int main(void) {
	int N;
	cin >> N;
	int x_min = 101, x_max = -1;
	int y_min = 101, y_max = -1;
	int x, y;
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		if (x > x_max)
			x_max = x;
		if (x < x_min)
			x_min = x;
		if (y > y_max)
			y_max = y;
		if (y < y_min)
			y_min = y;
	}
	int k = BIG((x_max - x_min), (y_max - y_min));
	cout << k*k;
	return 0;
}
