/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12787
 *
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <cmath>

#define ul unsigned long long int

using namespace std;
ul bintoten(string bin){
	int len = bin.length();
	ul result=0;
	reverse(bin.begin(), bin.end());
	for (int i = 0; i < len; i++)
		result += (ul)pow(2, i)*(bin[i]-'0');
	return result;
}
string tentobin(ul ten) {
	string bin = "";
	while (ten) {
		bin += (ten%2)+'0';
		ten >>= 1;
	}
	for (int i = bin.length(); i < 64; i++)
		bin += "0";
	reverse(bin.begin(), bin.end());
	return bin;
}
string tentobin_small(ul ten) {
	string bin = "";
	while (ten) {
		bin += (ten % 2) + '0';
		ten >>= 1;
	}
	for (int i = bin.length(); i < 8; i++)
		bin += "0";
	reverse(bin.begin(), bin.end());
	return bin;
}
int main(void){
	int T;
	for (scanf("%d", &T); T--;) {
		int x;
		cin >> x;
		if (x == 1) {
			string input, temp[8], result="";
			cin >> input;
			int k = 0;
			int len = input.length();
			for (int i = 0; i < len; i++) {
				if (input[i] == '.')
					k++;
				else
					temp[k] += input[i];
			}
			for (int i = 0; i < 8; i++) {
				int len_part = temp[i].length();
				ul ten_temp = 0;
				for (int j = 0; j < len_part; j++)
					ten_temp += (temp[i][j] - '0')*(ul)pow(10, len_part - j - 1);
				result += tentobin_small(ten_temp);
			}
			cout << bintoten(result) << "\n";
		}
		else {
			ul input_ten;
			cin >> input_ten;
			string k = tentobin(input_ten);
			for (int i = 0; i < 8; i++) {
				string temp="";
				for (int j = i * 8; j < (i + 1) * 8; j++)
					temp += k[j];
				cout << bintoten(temp);
				if (i < 7)
					cout << ".";
			}
			cout << "\n";
		}
	}
	return 0;
}
