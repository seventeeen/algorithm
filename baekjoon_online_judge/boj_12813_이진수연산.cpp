/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12813
 *
 */

#include<iostream>
#include<cstdio>
#include<string>

#define len 100000

using namespace std;

int main(void) {
	string A, B;
	cin >> A >> B;
	for (int i = 0; i < len; i++) {
		if (A[i] == '1' && B[i] == '1')
			printf("1");
		else
			printf("0");
	}
	printf("\n");

	for (int i = 0; i < len; i++) {
		if (A[i] == '1' || B[i] == '1')
			printf("1");
		else
			printf("0");
	}
	printf("\n");

	for (int i = 0; i < len; i++) {
		if (A[i] != B[i])
			printf("1");
		else
			printf("0");
	}
	printf("\n");

	for (int i = 0; i < len; i++) {
		if (A[i] == '0')
			printf("1");
		else
			printf("0");
	}
	printf("\n");

	for (int i = 0; i < len; i++) {
		if (B[i] == '0')
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	return 0;
}
