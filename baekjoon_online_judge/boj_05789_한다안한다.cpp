/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5789
 *
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
	int T;
	for (scanf("%d", &T); T--;) {
		string base;
		cin >> base;
		int k = base.length()>>1;
		if (base[k] == base[k - 1])
			cout << "Do-it" << endl;
		else
			cout << "Do-it-Not" << endl;
	}
	return 0;
}
