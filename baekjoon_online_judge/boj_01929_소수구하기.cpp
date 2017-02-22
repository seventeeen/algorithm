/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1929
 *
 */

#include <iostream>
#include <cmath>

using namespace std;
int table[1000001] = { 1, 1, };
bool is_prime(int n) {
	if (table[n])
		return false;
	int upper = (int)sqrt(n);
	for (int i = 2; i <= upper; i++) {
		if (!(n%i)) {
			for (int j = 1; j*i <= 1000000; j++)
				table[j*i] = 1;
			return false;
		}
	}
	return true;
}
int main(void) {
	int start, end;
	cin >> start >> end;
	for (int i = start; i <= end; i++) {
		if (is_prime(i))
			printf("%d\n", i);
	}
	return 0;
}
