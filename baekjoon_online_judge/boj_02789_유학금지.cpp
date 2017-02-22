/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2789
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(void){
	string a = "CAMBRIDGE";
	string input;
	cin >> input;
	int len;
	len = input.size();
	for (int i = 0; i < len; i++) {
		if (a.find(input[i]) == string::npos)
			cout << input[i];
	}
	return 0;
}
