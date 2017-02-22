/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12789
 *
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <functional>

using namespace std;
int main(){
	stack<int> st;
	int n, x;
	cin >> n;
	int flag = 1;
	for (int i = 0; i < n; i++) {
		cin >> x;
		st.push(x);
		while (st.size()) {
			if (st.top() == flag) {
				flag++;
				st.pop();
			}
			else
				break;
		}
	}
	if (st.size())
		cout << "Sad";
	else
		cout << "Nice";
	return 0;
}
