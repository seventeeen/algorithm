/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1715
 *
 */

#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main(void) {
	priority_queue<int, vector<int>, greater<int>> Q;
	int N, x;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		Q.push(x);
	}
	int result = 0;
	int temp;
	while (Q.size()!=1) {
		temp = Q.top();
		Q.pop();
		temp += Q.top();
		Q.pop();
		Q.push(temp);
		result += temp;
	}
	cout << result;
	return 0; 
}
