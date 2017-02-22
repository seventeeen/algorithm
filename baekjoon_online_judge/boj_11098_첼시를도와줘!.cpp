/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11098
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string name, max_name;
	int price, max_price;
	int T, n;
	for (scanf("%d", &T); T--;) {
		max_price = -1;
		max_name = "";
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> price >> name;
			if (price > max_price) {
				max_price = price;
				max_name = name;
			}
		}
		cout << max_name << endl;
	}
	return 0;
}
