/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2193
 *
 */

#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>

using namespace std;

long long int fib_table[100];

long long int fib_func(int n) {
	if (fib_table[n] == -1)
		fib_table[n] = fib_func(n - 1) + fib_func(n - 2);
	return fib_table[n];
}

int main(void) {
	for (int i = 0; i < 100; i++)
		fib_table[i] = -1;
	fib_table[0] = fib_table[1] = 1;
	int N;
	cin >> N;
	cout << fib_func(N-1);
	
	return 0;
}
