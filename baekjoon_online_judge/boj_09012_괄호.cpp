/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9012
 *
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int main(void){
	int N;
	string base;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int flag=0;
		cin >> base;
		int len = base.length();
		for (int k = 0; k < len; k++) {
			if (base[k] == '(')
				flag++;
			else {
				if (!flag) {
					flag = -1;
					break;
				}
				flag--;
			}
		}
		if (flag)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;

	}
	return 0;
}
