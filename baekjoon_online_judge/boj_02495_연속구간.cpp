/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2495
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string base;
	for (int T = 0; T < 3; T++) {
		int cnt = 1, max = 0;
		cin >> base;
		for (int i = 1; i < 8; i++) {
			if (base[i] == base[i - 1])
				cnt++;
			else {
				if (cnt > max)
					max = cnt;
				cnt = 1;
			}
		}
		if (cnt > max)
			max = cnt;
		cout << max << endl;
	}
	return 0;
}
