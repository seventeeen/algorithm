/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5217
 *
 */

#include <iostream>

using namespace std;

int main(void){
	int N, s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		cout << "Pairs for " << s << ": ";
		if (s > 2)
			cout << "1 " << s - 1;
		for (int j = 2; j < ((s+1) >> 1); j++)
			cout << ", " << j << " " << s - j;
		cout << endl;
	}
	return 0;
}
