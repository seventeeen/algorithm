/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/6321
 *
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		string input, result="";
		cin >> input;
		int len = input.length();
		for (int i = 0; i < len; i++) {
			if (input[i] == 'Z')
				result += "A";
			else
				result += input[i] + 1;
		}
		cout << "String #" << t << endl << result << endl;
		if (t != T)
			cout << endl;
	}
	return 0;
}
