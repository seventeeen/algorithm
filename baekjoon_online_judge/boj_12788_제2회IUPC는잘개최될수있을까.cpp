/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12788
 *
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
int main(){
	int N, M, K;
	cin >> N >> M >> K;
	int all = M*K;
	int *base = new int[N];
	for (int i = 0; i < N; i++)
		cin >> base[i];
	sort(base, base + N, greater<int>());
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (all <= 0) {
			cout << cnt;
			return 0;
		}
		all -= base[i];
		cnt++;
	}
	if (all > 0)
		cout << "STRESS";
	else
		cout << cnt;
	return 0;
}
