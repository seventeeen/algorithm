/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10569
 *
 */

#include <iostream>

using namespace std;

int main(void) {
	int T, V, E;
	for (scanf("%d", &T); T--;) {
		cin >> V >> E;
		cout << 2 - (V - E) << endl;
	}
	return 0;
}
