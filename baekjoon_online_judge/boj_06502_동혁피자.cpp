/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/6502
 *
 */

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void) {
	int t = 0;
	while (true) {
		int r, w, l;
		cin >> r;
		if (!r)
			break;
		cin >> w >> l;
		int R = (int)pow(2 * r, 2);
		int D = w*w + l*l;
		cout << "Pizza " << ++t;
		if (R >= D)
			cout << " fits ";
		else
			cout << " does not fit ";
		cout << "on the table." << endl;
	}
	return 0;
}
