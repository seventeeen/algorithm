/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9184
 *
 */

#include <iostream>
#include <cstring>

using namespace std;

int table[21][21][21];

int w(int a, int b, int c) {
	if ((a <= 0 || b <= 0) || c <= 0)
		return 1;
	else if ((a > 20 || b > 20) || c > 20)
		return w(20, 20, 20);
	if (table[a][b][c] == -1) {
		if (a < b && b < c)
			table[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		else
			table[a][b][c] = w(a - 1, b, c) + w(a - 1, b-1, c) + w(a - 1, b, c - 1) - w(a-1, b-1, c-1);
	}
	return table[a][b][c];
}

int main(void){
	memset(table, -1, sizeof(int) * 21 * 21 * 21);
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if ((a == -1 && b == -1) && c==-1) 
				break;
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";

	}

	return 0;
}
