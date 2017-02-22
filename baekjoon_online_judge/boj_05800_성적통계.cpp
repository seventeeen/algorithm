/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5800
 *
 */

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void) {
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N, table[50] = { 0, };
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> table[i];
		sort(table, table + N);
		int gap = 0, temp;
		for (int i = 1; i < N; i++) {
			if (gap < (temp=abs(table[i] - table[i - 1])))
				gap = temp;
		}
		cout << "Class " << t << endl << "Max " << table[N - 1] << ", Min " << table[0] << ", " << "Largest gap " << gap << endl;

	}
}
