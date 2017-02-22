/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12780
 *
 */

#include <iostream>
#include <string>

using namespace std;
int main(){
	string base, check;
	cin >> base >> check;
	int len = base.length();
	int k = 0, cnt = 0;
	while (base.find(check, k)!=string::npos) {
		cnt++;
		k = base.find(check, k)+1;
	}
	cout << cnt;
	return 0;
}
