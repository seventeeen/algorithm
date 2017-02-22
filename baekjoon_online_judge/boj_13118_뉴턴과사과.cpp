/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/13118
 *
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
	int x, y, z;
	int base[4];
	for (int i = 0; i < 4; i++)
		cin >> base[i];
	cin >> x >> y >> z;
	bool flag = true;
	for (int i = 0; i < 4; i++) {
		if (base[i] == x) {
			cout << i + 1;
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "0";
	return 0;
}
