/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12833
 *
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
	int a, b, N;
	cin >> a >> b >> N;
	if (N & 1)
		a ^= b;
	cout << a;
	return 0;
}
