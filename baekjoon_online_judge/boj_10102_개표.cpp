/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/10102
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string input;
	int N;
	cin >> N;
	cin >> input;
	int A = 0, B = 0;
	for (int i = 0; i < N; i++) {
		if (input[i] == 'A')
			A++;
		else
			B++;
	}
	if (A > B)
		cout << "A";
	else if (A < B)
		cout << "B";
	else
		cout << "Tie";

	return 0;
}
