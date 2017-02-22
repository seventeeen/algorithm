/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4564
 *
 */

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(void) {
	string k;
	while (true) {
		cin >> k;
		if (k == "0")
			break;
		int len;
		cout << k << " ";
		while ((len = k.length()) != 1) {
			int temp = 1;
			for (int i = 0; i < len; i++)
				temp *= (k[i] - '0');
			k = to_string(temp);
			cout << temp << " ";
		}
		cout << "\n";
	}
	return 0;
}
