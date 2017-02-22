/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1919
 *
 */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(void) {
	int check_A[26] = { 0, }, check_B[26] = { 0, };
	int result = 0;
	string A, B;
	getline(cin, A);
	getline(cin, B);
	int len = A.length();
	for (int i = 0; i < len; i++)
		check_A[A[i] - 'a']++;
	len = B.length();
	for (int i = 0; i < len; i++)
		check_B[B[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		result += abs(check_A[i] - check_B[i]);
	cout << result;
	return 0;
}
