/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5032
 *
 */

#include <iostream>

using namespace std;

int main(void){
	int base, x, k;
	cin >> base >> x >> k;
	base += x;
	int sum = 0;
	while (base >= k) {
		sum += base / k;
		base = base / k + base%k;
	}
	cout << sum;
	return 0;
}
