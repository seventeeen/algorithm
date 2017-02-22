/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1850
 *
 */

#include <cstdio>
#include <iostream>

#define ul unsigned long long int
using namespace std;

ul gcd(ul a, ul b) {
	return b ? gcd(b, a%b) : a;
}
int main(void) {
	ul a, b;
	cin >> a >> b;
	ul i, k = gcd(a, b);
	for (i = 0; i < k; i++)
		printf("1");

	return 0;
}
