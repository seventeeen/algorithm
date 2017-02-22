/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4613
 *
 */

#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(void) {
	string base;
	while (getline(cin, base)) {
		if (base[0] == '#')
			break;
		unsigned long long int result = 0;
		int len = base.length();
		for (int i = 0; i < len; i++) {
			if (isalpha(base[i]))
				result += (i + 1)*(base[i] - 'A' + 1);
		}
		cout << result << "\n";
	}
	return 0;
}
