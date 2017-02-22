/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12756
 *
 */

#include <iostream>

using namespace std;

int main(void) {
	int a_atk, a_life;
	int b_atk, b_life;
	cin >> a_atk >> a_life >> b_atk >> b_life;
	while (true) {
		if (a_life <= 0 && b_life <= 0) {
			cout << "DRAW";
			break;
		}
		else if (a_life <= 0) {
			cout << "PLAYER B";
			break;
		}
		else if (b_life <= 0) {
			cout << "PLAYER A";
			break;
		}
		a_life -= b_atk;
		b_life -= a_atk;
	}
	return 0;
}
