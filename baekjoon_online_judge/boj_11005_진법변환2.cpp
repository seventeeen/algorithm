/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11005
 *
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	char table[36];
	for (int i = 0; i < 10; i++)
		table[i] = '0' + i;
	for (int i = 10; i < 36; i++)
		table[i] = 'A' + i - 10;
	int base, k;
	cin >> base >> k;
	string result = "";
	while (base) {
		result += table[base%k];
		base /= k;
	}
	reverse(result.begin(), result.end());
	cout << result;
	return 0;
}
