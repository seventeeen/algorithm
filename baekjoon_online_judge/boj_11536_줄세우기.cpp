/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11536
 *
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<string> base;
	vector<string> sorted;
	int N;
	cin >> N;
	string temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		base.push_back(temp);
		sorted.push_back(temp);
	}
	sort(sorted.begin(), sorted.end());
	bool flag = true;
	for (int i = 0; i < N; i++) {
		if (base[i] != sorted[i]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "INCREASING";
		return 0;
	}
	flag = true;
	for (int i = 0; i < N; i++) {
		if (base[i] != sorted[N - i - 1]) {
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "DECREASING";
	else
		cout << "NEITHER";
	return 0;
}
