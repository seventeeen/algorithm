/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5354
 *
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
	int T;
	for (scanf("%d", &T); T--;) {
		int x;
		cin >> x;
		if (x == 1) {
			cout << "#\n\n";
			continue;
		}
		for (int i = 0; i < x; i++)
			cout << "#";
		cout << "\n";
		for (int i = 0; i < x - 2; i++){
			cout << "#";
			for (int j = 0; j < x - 2; j++)
				cout << "J";
			cout << "#\n";
		}
		for (int i = 0; i < x; i++)
			cout << "#";
		cout << "\n\n";
	}
	return 0;
}
