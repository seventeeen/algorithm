/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1138
 *
 */

#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
	int N, arr[10] = { 0, };
	cin >> N;
	for (int i = 0; i < N; i++) {
		int k;
		cin >> k;
		int flag = k+1;
		int j = 0;
		while (true) {
			if (!arr[j]) {
				flag--;
				if (!flag) {
					arr[j] = i+1;
					break;
				}
			}
			j++;
		}
	}
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	return 0;
}
