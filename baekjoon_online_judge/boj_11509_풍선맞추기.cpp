/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11509
 *
 */

#include<cstdio>
#include<iostream>

using namespace std;

int main(void) {
	int N, x;
	int arr[1000001] = { 0 };
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &x);
		arr[x]++;
		if (!arr[x + 1])
			cnt++;
		else
			arr[x + 1]--;
	}
	cout << cnt;
	return 0;
}
