/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2875
 *
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int N, M, K;
	cin >> N >> M >> K;
	M <<= 1;
	for (int i = 0; i < K; i++) {
		if (N > M)
			N -= 1;
		else
			M -= 2;
	}
	int result = min(N, M);
	if (result <= 0)
		cout << "0";
	else
		cout << (result >> 1);
	return 0;
}
