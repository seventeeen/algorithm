/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5073
 *
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
	while (true) {
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		if ((!arr[0] && !arr[1]) && !arr[2])
			break;
		sort(arr, arr + 3);
		int x = arr[2], y = arr[1], z = arr[0];
		if (x == y && y == z)
			cout << "Equilateral\n";
		else if (x >= y + z)
			cout << "Invalid\n";
		else if (x == y || y == z)
			cout << "Isosceles\n";
		else
			cout << "Scalene\n";
	}
	return 0;
}
