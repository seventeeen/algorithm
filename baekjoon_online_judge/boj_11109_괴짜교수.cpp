/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11109
 *
 */

#include <iostream>

using namespace std;

int main(void) {
	int d, n, s, p;
	int T;
	for (scanf("%d", &T); T--;) {
		cin >> d >> n >> s >> p;
		if (d + (n*p) < n*s)
			cout << "parallelize\n";
		else if (d + (n*p) > n*s)
			cout << "do not parallelize\n";
		else
			cout << "does not matter\n";
	}
	return 0;
}
