/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1592
 *
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
	int N, M, L;
	cin >> N >> M >> L;
	int* base = (int*)malloc(3*N * sizeof(int));
	int* check = (int*)calloc(N, sizeof(int));
	for (int i = 0; i < N; i++)
		base[i] = base[i + N] = base[i + N + N] = i;
	int s = 0;
	int cnt = -1;
	while (true) {
		cnt++;
		if ((++check[s]) == M)
			break;
		if (check[s] & 1)
			s = base[s + N - L];
		else
			s = base[s + N + L];
	}
	cout << cnt;
	return 0;
}
