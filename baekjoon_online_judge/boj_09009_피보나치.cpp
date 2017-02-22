/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9009
 *
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int arr[1000] = { 0, 1, };
int fib(int n) {
	if (!n)
		return 0;
	if (!arr[n])
		arr[n] = fib(n-1) + fib(n - 2);
	return arr[n];
}
int binary_search(int k) {
	int left=0, right=46, mid;
	while (left <= right) {
		mid = (left + right) >> 1;
		if (k > arr[mid])
			left = ++mid;
		else if (k < arr[mid])
			right = --mid;
		else
			return mid;
	}
	return right;
}
int main(void){
	fib(46);
	int n;
	for (scanf("%d", &n); n--;) {
		int value, cnt=0;
		int temp[50] = { 0, };
		cin >> value;
		int k = -1;
		while (value) {
			int s = arr[binary_search(value)];
			temp[++k] = s;
			value -= s;
		}
		for (int i = k; i >= 0; i--)
			cout << temp[i] << " ";
		cout << endl;
	}
	return 0;
}
