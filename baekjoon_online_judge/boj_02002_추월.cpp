/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2002
 *
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;
bool table[1000] = { 0, };

int check_table(void) {
	for (int i = 0; i < 1000; i++) {
		if (!table[i])
			return i;
	}
}

int main(void){
	string base[1000], temp;
	int arr[1000] = { 0, };
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> base[i];
	for (int i = 0; i < N; i++) {
		cin >> temp;
		for (int j = 0; j < N; j++) {
			if (temp == base[j]) {
				arr[i] = j;
				break;
			}
		}
	}
	int cnt = 0;
	for(int i=0; i<N; i++){
		int temp = check_table();
		if (arr[i] == temp)
			table[temp] = true;
		else {
			table[arr[i]] = true;
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}
