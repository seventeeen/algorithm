/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3034
 *
 */

#include <iostream>

using namespace std;

int main(void){
	int N, W, H, length, a;
	cin >> N >> W >> H;
	length = W*W + H*H;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a*a <= length)
			cout << "DA" << endl;
		else
			cout << "NE" << endl;
	}
	return 0;
}
