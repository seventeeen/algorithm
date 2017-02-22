/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1476
 *
 */

#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

int main(void) {
	int E, S, M;
	unsigned long long int i=0;
	cin >> E >> S >> M;
	while (true) {
		if (((++i) % 15 ? i%15 : 15) == E) {
			if ((i % 28 ? i%28 : 28) == S) {
				if ((i % 19 ? i%19 : 19) == M)
					break;
			}
		}
	}
	cout << i;
	return 0;
}
