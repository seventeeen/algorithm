/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2799
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(void){
	int N, M;
	string garage, base[500];
	cin >> N >> M;
	cin >> garage;
	for (int i = 0; i < 5 * N; i++)
		cin >> base[i];
	int result[5] = { 0, };
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int temp = 0;
			for (int k = i * 5; k < i * 5 + 4; k++) {
				if (base[k][j * 5 + 1] == '.')
					temp++;
			}
			result[4 - temp]++;
		}
	}
	for (int i = 0; i < 5; i++)
		cout << result[i] << " ";
	return 0;
}
