/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2581
 *
 */

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>

using namespace std;

int table[10001] = { 0, };
int is_prime(int a) {
	if (table[a] == -1) {
		int end = (int)sqrt(a);
		for (int i = 2; i <= end; i++) {
			if (!(a%i)) {
				for (int j = 2; j*i <= 10000; j++)
					table[j*i] = 0;
				return 0;
			}
		}
		table[a] = 1;
	}
	return table[a];
}
int main(void){
	int A, B;
	vector<int> arr;
	cin >> A >> B;
	memset(table, -1, sizeof(int) * 10001);
	table[0] = table[1] = 0;
	table[2] = 1;
	table[3] = 1;
	bool flag = false;
	int min;
	unsigned long long int sum = 0;
	for (int i = B; i >= A; i--) {
		if (is_prime(i)) {
			flag = true;
			sum += i;
			min = i;
		}
	}
	if (flag)
		cout << sum << endl << min;
	else
		cout << "-1";

	return 0;
}
