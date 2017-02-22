/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/10103
 *
 */

#include <iostream>

using namespace std;

int main(void) {
	int A = 100, B = 100, N;
	cin >> N;
	int a, b;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		if (a > b)
			B -= a;
		else if (a < b)
			A -= b;
	}
	cout << A << endl << B;
	return 0;
}
