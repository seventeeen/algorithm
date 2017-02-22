/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1568
 *
 */

#include <iostream>
using namespace std;
int main(void){
	int N, k, cnt=0;
	cin >> N;
	k = 0;
	while (N) {
		if (N < ++k)
			k = 1;
		N -= k;
		cnt++;	
	}
	cout << cnt;
	return 0;
}
