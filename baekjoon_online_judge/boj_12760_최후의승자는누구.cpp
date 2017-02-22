/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12760
 *
 */

#include <iostream>
#include <functional>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(void) {
	int N, M;
	cin >> N >> M;
	int* result = (int*)calloc(N, sizeof(int));
	int** table = (int**)calloc(N, sizeof(int));
	for (int i = 0; i < N; i++)
		table[i] = (int*)calloc(M, sizeof(int));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			cin >> table[i][j];
	}
	for (int i = 0; i < N; i++)
		sort(table[i], table[i] + M, greater<int>());
	for (int i = 0; i < M; i++) {
		int max = -1;
		for (int j = 0; j < N; j++) {
			if (max < table[j][i])
				max = table[j][i];
		}
		for (int j = 0; j < N; j++) {
			if (max == table[j][i])
				result[j]++;
		}
	}
	int max = -1;
	for (int i = 0; i < N; i++) {
		if (max < result[i])
			max = result[i];
	}
	for (int i = 0; i < N; i++) {
		if (max == result[i])
			cout << i + 1 << " ";
	}
	return 0;
}
