/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12785
 *
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cmath>

#define dt unsigned long long int

using namespace std;
dt table[500][500] = { 0, };

dt com(dt a, dt b) {
	if (table[a][b] == -1)
		table[a][b] = (com(a - 1, b - 1) + com(a - 1, b)) % 1000007;
	return table[a][b];
}
int main(void){
	memset(table, -1, sizeof(dt) * 500 * 500);
	for (int i = 0; i < 500; i++)
		table[i][0] = 1;
	for (int i = 1; i < 500; i++)
		table[0][i] = 0;
	dt w, h, x, y;
	cin >> w >> h >> x >> y;
	dt k = com(x - 1 + y - 1, x - 1);
	dt p = com(w - x + h - y, w - x);
	cout << (k*p) % 1000007;

	return 0;
}
