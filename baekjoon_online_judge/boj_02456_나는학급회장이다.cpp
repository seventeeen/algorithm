/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2456
 *
 */

#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

typedef struct {
	int num;
	int score;
	int three;
	int two;
}candidate;
int compare(const void* fst, const void* snd) {
	int a1, a2, b1, b2, c1, c2;
	a1 = ((candidate*)fst)->score;
	a2 = ((candidate*)snd)->score;
	b1 = ((candidate*)fst)->three;
	b2 = ((candidate*)snd)->three;
	c1 = ((candidate*)fst)->two;
	c2 = ((candidate*)snd)->two;
	if (a1 != a2)
		return a2 - a1;
	else if (b1 != b2)
		return b2 - b1;
	else
		return c2 - c1;
}

int main(void){
	candidate arr[3] = { 0, };
	arr[0].num = 1;
	arr[1].num = 2;
	arr[2].num = 3;
	int N;
	int temp[3];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp[0] >> temp[1] >> temp[2];
		for (int j = 0; j < 3; j++) {
			arr[j].score += temp[j];
			if (temp[j] == 3)
				arr[j].three++;
			else if (temp[j] == 2)
				arr[j].two++;
		}
	}
	qsort(arr, 3, sizeof(candidate), compare);

	if (arr[0].score == arr[1].score) {
		if (arr[0].three == arr[1].three) {
			if (arr[0].two == arr[1].two) {
				cout << "0 " << arr[0].score;
				return 0;
			}
		}
	}

	cout << arr[0].num << " " << arr[0].score;
	return 0;
}
