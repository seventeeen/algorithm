/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2003
 *
 */

#include <iostream>

using namespace std;

int main(void) {
	int cnt = 0;
	int N, M, sum=0, x;
	int table[10001] = { 0, };
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> x;
		sum += x;
		table[i] = sum;
	}
	int left = 0, right = 1;
	while (left <= right) {
		if (right > N)
			break;
		if (left == right)
			right++;
		if (table[right] - table[left] == M) {
			cnt++;
			left++;
			right++;
		}
		else if (table[right] - table[left] > M)
			left++;
		else
			right++;
	}
	cout << cnt;

	return 0;
}
