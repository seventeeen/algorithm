/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11213
 *
 */

#include <iostream>

using namespace std;

int main(void) {
	int check[7] = { 0, };
	int table[101] = { 0, };
	int n, x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		check[x]++;
		table[i] = x;
	}
	bool flag = false;
	int max = -1, result = 0;
	for (int i = 1; i <= 6; i++) {
		if (check[i] == 1) {
			result = i;
			flag = true;
		}
	}
	if (flag)
		for (int i = 1; i <= n; i++) {
			if (table[i] == result)
				cout << i;
		}
	else
		cout << "none";
	return 0;
}
