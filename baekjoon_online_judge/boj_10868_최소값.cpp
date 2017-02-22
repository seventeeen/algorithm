/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10868
 *
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void){
	int n, m;
	int x, y;
	cin >> n >> m;
	int* base = new int[n];
	int* result = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &base[i]);
	int temp = result[0] = base[0];
	for (int i = 1; i < n; i++) {
		if (base[i] < temp)
			temp = base[i];
		result[i] = temp;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		if (result[x - 1] > result[y - 1])
			printf("%d\n", result[y - 1]);
		else
			printf("%d\n", *min_element(base+x-1, base+y));
	}
	return 0;
}
