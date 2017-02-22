/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11656
 *
 */

#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	string temp;
	cin >> temp;
	vector<string> arr;
	int N = temp.length();
	for (int i = 0; i < N; i++) {
		string k = "";
		for (int j = i; j < N; j++)
			k += temp[j];
		arr.push_back(k);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++)
		cout << arr[i] << "\n";
	return 0;
}
