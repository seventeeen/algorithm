/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1145
 *
 */

#include <cstdio>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
	return b ? gcd(b, a%b) : a;
}
int lcm(int a, int b, int c) {
	int k = (a*b) / gcd(a, b);
	k = (c*k) / gcd(c, k);
	return k;
}
int main(void) {
	int num[5];
	for (int i = 0; i < 5; i++)
		cin >> num[i];
	int result = 999999999;
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			for (int k = j + 1; k < 5; k++) {
				int L = lcm(num[i], num[j], num[k]);
				if (result > L)
					result = L;
			}
		}
	}
	cout << result;

	return 0;
}
