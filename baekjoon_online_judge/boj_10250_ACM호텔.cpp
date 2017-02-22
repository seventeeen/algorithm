/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10250
 *
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void){
	int T;
	for (scanf("%d", &T); T--;) {
		int H, W, N;
		scanf("%d %d %d", &H, &W, &N);
		int front, back;
		back = N / H + (N%H ? 1 : 0);
		front = N%H ? N%H : H;
		cout << front;
		if (back < 10)
			cout << 0;
		cout << back << endl;
	}
	return 0;
}
