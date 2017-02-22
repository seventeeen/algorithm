/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1764
 *
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void){
	int n, m;
	cin >> n >> m;
	string *base = new string[n];
	string *result = new string[min(n, m)];
	string temp;
	for (int i = 0; i < n; i++)
		cin >> base[i];
	sort(base, base + n);
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (binary_search(base, base + n, temp))
			result[cnt++] = temp;
	}
	sort(result, result + cnt);
	cout << cnt << endl;
	for (int i = 0; i < cnt; i++)
		cout << result[i] << "\n";
	return 0;
}
