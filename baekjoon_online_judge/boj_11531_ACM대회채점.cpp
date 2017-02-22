/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11531
 *
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	int table[26][2] = { 0, };
	int M;
	char Q;
	string J;
	while (true) {
		scanf("%d", &M);
		if (M == -1)
			break;
		cin >> Q >> J;
		if (J == "wrong")
			table[Q - 'A'][0] += 20;
		else {
			table[Q - 'A'][0] += M;
			table[Q - 'A'][1] = 1;
		}
	}
	int cnt = 0, sum = 0;
	for (int i = 0; i < 26; i++) {
		if (table[i][1]) {
			cnt++;
			sum += table[i][0];
		}
	}
	cout << cnt << " " << sum;
	return 0;
}
