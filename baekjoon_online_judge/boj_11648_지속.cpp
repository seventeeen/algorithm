/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11648
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string k;
	cin >> k;
	int len, cnt=0;
	while ((len = k.length()) != 1) {
		int temp = 1;
		for (int i = 0; i < len; i++)
			temp *= (k[i] - '0');
		cnt++;
		k = to_string(temp);
	}
	cout << cnt;
	return 0;
}
