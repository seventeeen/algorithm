/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2526
 *
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	int N, P;
	vector<int> arr;
	cin >> N >> P;
	int temp = N;
	arr.push_back(temp);
	while (true) {
		temp *= N;
		temp %= P;
		arr.push_back(temp);
		int len = arr.size();
		for (int i = 0; i < len - 1; i++) {
			if (arr[i] == temp) {
				cout << len - 1 - i;
				return 0;
			}
		}

	}
	return 0;
}
