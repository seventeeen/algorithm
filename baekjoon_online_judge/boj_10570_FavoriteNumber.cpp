/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10570
 *
 */

#include <iostream>

using namespace std;

int main(void) {
	int T, V, x;
	for (scanf("%d", &T); T--;) {
		int arr[1001] = { 0, };
		cin >> V;
		for (int i = 0; i < V; i++) {
			cin >> x;
			arr[x]++;
		}
		int max = -1;
		for (int i = 1; i < 1001; i++) {
			if (arr[i] > max)
				max = arr[i];
		}
		for (int i = 1; i < 1001; i++) {
			if (arr[i] == max) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
