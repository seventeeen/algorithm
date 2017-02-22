/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1356
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string base;
	getline(cin, base);
	int N = base.length();
	for (int i = 0; i < N-1; i++) {
		int A=1, B=1;
		for (int k = 0; k <= i; k++)
			A *= (base[k] - '0');
		for (int k = i + 1; k < N; k++)
			B *= (base[k] - '0');
		if (A == B) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
