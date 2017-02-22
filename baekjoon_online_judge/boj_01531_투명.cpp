/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1531
 *
 */

#include <iostream>
#define NMAX 100
using namespace std;

int arr[NMAX+1][NMAX+1] = { 0, };
int main(void){
	int N, M;
	int a, b, x, y;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> a >> b >> x >> y;
		for (int k = a; k <= x; k++) {
			for (int p = b; p <= y; p++)
				arr[k][p]++;
		}
	}
	int cnt=0;
	for (int i = 1; i <= 100; i++) {
		for (int k = 1; k <= 100; k++) {
			if (arr[i][k] > M)
				cnt++;
		}
	}
	cout << cnt;
	return 0;
}
