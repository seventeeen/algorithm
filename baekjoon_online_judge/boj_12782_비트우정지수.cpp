/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12782
 *
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
	int T;
	for (scanf("%d", &T); T--;) {
		string A, B;
		cin >> A >> B;
		int a=0, b=0, len = A.length();
		for (int i = 0; i < len; i++) {
			if (A[i] != B[i]) {
				if (A[i] == '1')
					a++;
				else
					b++;
			}
		}
		cout << max(a, b) << "\n";
	}

	return 0;
}
