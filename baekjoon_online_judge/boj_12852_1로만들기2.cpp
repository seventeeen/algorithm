/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12852
 *
 */

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int table[1000001];
int value[1000001];

int dynamic(int N) {
	if (table[N] == -1) {
		int min = dynamic(N-1) + 1;
		value[N] = N - 1;
		if (!(N % 2)) {
			int temp = dynamic(N / 2);
			if (temp + 1 < min) {
				min = temp + 1;
				value[N] = N / 2;
			}
		}
		if (!(N % 3)) {
			int temp = dynamic(N / 3);
			if (temp + 1 < min) {
				min = temp + 1;
				value[N] = N / 3;
			}
		}
		table[N] = min;
	}
	return table[N];
}

int main(void) {
	memset(table, -1, sizeof(int) * 1000001);
	table[0] = table[1] = 0;
	table[2] = table[3] = 1;
	int N;
	cin >> N;
	cout << dynamic(N) << "\n";
	int k = N;
	printf("%d ", N);
	while (true) {
		if (value[k] < 1)
			break;
		printf("%d ", value[k]);
		k = value[k];
	}
	if (N != 1)
		printf("1");
	return 0;
}
