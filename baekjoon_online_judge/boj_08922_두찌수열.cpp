/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/8922
 *
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(void) {
	int T;
	for (scanf("%d", &T); T--;) {
		int N, arr[15];
		cin >> N;
		for (int i = 0; i < N; i++)
			scanf("%d", &arr[i]);
		for (int j = 0; j < 1005; j++) {
			int temp = abs(arr[N-1]-arr[0]);
			for (int i = 0; i < N - 1; i++)
				arr[i] = abs(arr[i] - arr[i + 1]);
			arr[N - 1] = temp;
		}
		bool flag = true;
		for (int i = 0; i < N; i++) {
			if (arr[i]) {
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "ZERO\n";
		else
			cout << "LOOP\n";
	}
	
	return 0;
}
