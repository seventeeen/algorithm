/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1927
 *
 */

#include<iostream>
#include<queue>
#include<functional>
#define gc getchar

using namespace std;
inline void scan_int(int *x)
{
	register int c = gc();
	*x = 0;
	for (; c>47 && c<58; c = gc())
		*x = (*x << 1) + (*x << 3) + c - '0';
}

int main(void) {
	priority_queue<int, vector<int>, greater<int>> Q;
	int N, x;
	scan_int(&N);
	for (int i = 0; i < N; i++) {
		scan_int(&x);
		if (x)
			Q.push(x);
		else {
			if (Q.size()) {
				cout << Q.top() << "\n";
				Q.pop();
			}
			else
				cout << "0\n";
		}
	}
	return 0;
}
