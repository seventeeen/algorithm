/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9492
 *
 */

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(void) {
	while (true) {
		int n;
		cin >> n;
		if (!n)
			break;
		string arr[1000], temp;
		int k = n - (n>>1);
		for (int i = 0; i < k; i++) {
			cin >> temp;
			arr[i<<1] = temp;
		}
		for (int i = 0; i < n - k; i++) {
			cin >> temp;
			arr[(i<<1) + 1] = temp;
		}
		for (int i = 0; i < n; i++)
			cout << arr[i] << "\n";
	}
	return 0;
}
