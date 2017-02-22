/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11004
 *
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int arr[5000010];

int main(void){
	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	nth_element(arr, arr + K-1, arr + N);
	cout << arr[K-1];
	return 0;
}
