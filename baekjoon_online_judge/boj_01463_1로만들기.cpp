/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1463
 *
 */

#include <iostream>
#include <queue>
using namespace std;

int main(void){
	queue<int> check;
	int N, M, cnt=0, result=0;
	cin >> N;
	check.push(N);
	while (!check.empty()) {
		M = check.front();
		if (M == 1)
			break;
		if (M % 3 == 0) {
			check.push(M / 3);
			cnt++;
		}
		else if (M % 2 == 0) {
			check.push(M / 2);
			cnt++;
		}
		check.push(M - 1);
		cnt++;
		check.pop();
		if (check.size() == cnt) {
			result++;
			cnt = 0;
		}
	}
	cout << result;
	return 0;
}
