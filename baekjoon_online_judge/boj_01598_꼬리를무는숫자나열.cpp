/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1598
 *
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int a, b, x1, y1, x2, y2;
	cin >> a >> b;
	x1 = a/4 + (a%4 ? 1 : 0);
	y1 = a % 4 ? 5 - (a % 4) : 1;

	x2 = b / 4 + (b % 4 ? 1 : 0);
	y2 = b % 4 ? 5 - (b % 4) : 1;
	cout << abs(x1 - x2) + abs(y1 - y2);
	return 0;
}
