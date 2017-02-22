/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12790
 *
 */

#include <iostream>
#include <string>

using namespace std;
int main(){
	int T;
	for (scanf("%d", &T); T--;) {
		int a, b, c, d, a_, b_, c_, d_;
		cin >> a >> b >> c >> d >> a_ >> b_ >> c_ >> d_;
		int hp, mp, at, df;
		hp = a + a_ > 0 ? a + a_ : 1;
		mp = b + b_ > 0 ? b + b_ : 1;
		at = c + c_ >= 0 ? c + c_ : 0;
		df = d + d_;
		cout << (hp + 5 * mp + 2 * at + 2 * df) << "\n";
	}

	return 0;
}
