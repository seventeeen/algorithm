/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3181
 *
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	char k[1001];
	string base[10] = { "i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };
	string result = "";
	scanf("%s", k);
	result += toupper(k[0]);
	while (scanf("%s", k) != EOF) {
		string temp = k;
		bool flag = true;
		for (int i = 0; i < 10; i++) {
			if (!temp.compare(base[i])) {
				flag = false;
				break;
			}
		}
		if (flag)
			result += toupper(k[0]);
	}
	cout << result;
	return 0;
}
