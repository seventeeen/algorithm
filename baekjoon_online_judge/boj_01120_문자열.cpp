/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1120
 *
 */

#include <iostream>
#include <cstring>

using namespace std;
int comp(char* a, char* b) {
	int len = strlen(a);
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] != b[i])
			result++;
	}
	return result;
}
int main(void) {
	char A[51], B[51];
	cin >> A >> B;
	int n = strlen(B) - strlen(A);
	int min = 51;
	for (int i = 0; i <= n; i++) {
		if (min > comp(A, B+i))
			min = comp(A, B+i);
	}
	cout << min;
	return 0;
}
