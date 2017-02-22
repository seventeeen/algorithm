/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3273
 *
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int N, M;
	cin >> N;
	int* table = new int[N];
	for (int i = 0; i < N; i++)
		scanf("%d", &table[i]);
	cin >> M;
	sort(table, table + N);
	int left = 0, right = N-1, cnt=0; 
	while (left < right) {
		int L = table[left], R = table[right];
		if (L + R == M) {
			cnt++;
			if (table[left + 1] - L < R - table[right - 1])
				left++;
			else if (table[left + 1] - L > R - table[right - 1])
				right--;
			else {
				left++;
				right--;
			}
		}
		else if (L + R > M)
			right--;
		else
			left++;
	}
	cout << cnt;
	return 0;
}
