/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/6378
 *
 */

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string func(string str) {
	int k = str.length();
	int calced = 0;
	for (int i = 0; i < k; i++)
		calced += str[i] - '0';
	return to_string(calced);
}

int main(void) {
	while (true) {
		string base;
		cin >> base;
		if (base == "0")
			break;
		while (base.length() != 1)
			base = func(base);
		cout << base << "\n";

	}
	return 0;
}
