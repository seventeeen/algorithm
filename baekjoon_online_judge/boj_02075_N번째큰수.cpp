/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2075
 *
 */

#include <cstdio>
#include <queue>
#include <functional>

using namespace std;

priority_queue<int, vector<int>, greater<int> > Q;
int main(void) {
	int N, x;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &x);
		Q.push(x);
	}
	for (int i = 0; i < N*N - N; i++) {
		scanf("%d", &x);
		
		Q.push(x);
		Q.pop();
	
	}
	
	printf("%d", Q.top());
	return 0;
}
