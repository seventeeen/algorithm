/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4458
 *
 */

#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(void) {
	int T;
	scanf("%d", &T);
	string base;
	for (int i = 0; i <= T; i++) {
		getline(cin, base);
		if (!base[0])
			continue;
		base[0] = toupper(base[0]);
		cout << base << "\n";
	}
	return 0;
}
