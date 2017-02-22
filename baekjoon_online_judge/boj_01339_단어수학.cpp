/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1339
 *
 */

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

typedef struct {
	char c;
	int n;
}alpha;

int compare(const void* fst, const void* snd) {
	int a, b;
	a = ((alpha*)fst)->n;
	b = ((alpha*)snd)->n;
	return b - a;
}
int main(void){
	alpha score[26] = {0,};
	for (int i = 0; i < 26; i++)
		score[i].c = 'A' + i;
	string X, Y;
	string input[10];
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> input[i];
		reverse(input[i].begin(), input[i].end());
		int len = input[i].length();
		for (int j = 0; j < len; j++)
			score[input[i][j] - 'A'].n += (int)pow(10, j);
	}

	qsort(score, 26, sizeof(alpha), compare);
	
	int table[26] = { 0, };
	
	for (int i = 0; i < 10; i++)
		table[score[i].c - 'A'] = 9 - i;

	for (int i = 0; i<N; i++)
		reverse(input[i].begin(), input[i].end());
	int sum = 0;
	for (int i = 0; i < N; i++) {
		int temp = 0;
		int len = input[i].length();
		for (int j = 0; j < len; j++)
			temp = (temp << 1) + (temp << 3) + table[input[i][j] - 'A'];
		sum += temp;
	}
	cout << sum;
	
	return 0;
}
