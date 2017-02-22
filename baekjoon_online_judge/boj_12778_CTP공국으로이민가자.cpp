/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12778
 *
 */

#include <iostream>

using namespace std;
int main(){
	int T;
	for (scanf("%d", &T); T--;) {
		int n;
		char type;
		cin >> n >> type;
		if (type == 'C') {
			char x;
			for (int i = 0; i < n; i++) {
				cin >> x;
				cout << x - 'A' + 1 << " ";
			}
			cout << endl;
		}
		else {
			int x;
			for (int i = 0; i < n; i++) {
				cin >> x;
				cout << (char)(x + 'A' - 1) << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
