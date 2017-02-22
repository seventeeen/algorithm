/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5026
 *
 */

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

int main(void){
	int N;
	string base;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> base;
		if (base == "P=NP")
			cout << "skipped\n";
		else {
			int a=0, b=0;
			string A="", B="";
			reverse(base.begin(), base.end());
			int k = 0;
			while (true) {
				if (base[k] != '+')
					A += base[k++];
				else {
					k++;
					break;
				}
			}
			int len = base.length();
			for (int j = k; j < len; j++)
				B += base[j];
			len = A.length();
			for (int j = 0; j < len; j++)
				a += (A[j] - '0')*(int)pow(10, j);
			len = B.length();
			for (int j = 0; j < len; j++)
				b += (B[j] - '0')*(int)pow(10, j);
			cout << a + b << "\n";

		}
	}
	return 0;
}
