/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/7600
 *
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
	string base;
	while (true) {
		int check[26] = { 0, };
		getline(cin, base);
		if (base == "#")
			break;
		int len = base.length();
		for (int i = 0; i < len; i++) {
			if (isalpha(base[i]))
				check[tolower(base[i]) - 'a']++;
		}
		int cnt = 0;
		for (int i = 0; i < 26; i++) {
			if (check[i])
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
