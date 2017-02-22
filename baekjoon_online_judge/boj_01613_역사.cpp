/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1613
 *
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int main(void) {
	int n, p, s;
	cin >> n >> p;
	int table[401][401] = { 0, };
	int x, y;
	for (int i = 0; i < p; i++) {
		scanf("%d %d", &x, &y);
		table[x][y] = -1;
		table[y][x] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (table[j][i] * table[i][k] > 0)
					table[j][k] = table[j][i];
			}
		}
	}
	cin >> s;
	for 
		(int i = 0; i < s; i++) {
		scanf("%d %d", &x, &y);
		cout << table[x][y] << "\n";
	}


	return 0;
}
