/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10453
 *
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(void) {
	int T;
	for (scanf("%d", &T); T--;) {
		string A, B;
		cin >> A >> B;
		if (A.length() != B.length()) {
			cout << "-1\n";
			continue;
		}
		int k = A.length();
		vector<int> fst, snd;
		for (int i = 0; i < k; i++) {
			if (A[i] == 'a')
				fst.push_back(i);
			if (B[i] == 'a')
				snd.push_back(i);
		}
		int sum = 0;
		int cnt = fst.size();
		for (int i = 0; i < cnt; i++) {
			sum += abs(fst.back() - snd.back());
			fst.pop_back();
			snd.pop_back();
		}
		cout << sum << "\n";

	}
	
	return 0;
}
