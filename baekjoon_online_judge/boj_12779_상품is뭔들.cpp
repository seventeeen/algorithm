/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12779
 *
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <cmath>

#define ul unsigned long long int

using namespace std;
ul gcd(ul a, ul b) {
	ul temp = 0;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	while (b) {
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}
int main(){
	ul a, b;
	cin >> a >> b;
	ul bottom = b - a;
	ul top = (ul)sqrt(b) - (ul)sqrt(a);
	if (!top) {
		cout << "0";
		return 0;
	}
	else {
		ul g = gcd(top, bottom);
		cout << top / g << "/" << bottom / g;
	}
	return 0;
}
