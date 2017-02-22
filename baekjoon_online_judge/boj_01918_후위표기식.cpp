/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1918
 *
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>

using namespace std;

stack<char> st;

void pop_print(void) {
	cout << st.top();
	st.pop();
}
int char_rank(char x) {
	switch (x) {
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	default:
		return 0;
	}
}
int main(void){
	string base;
	getline(cin, base);
	int len = base.length();
	st.push(' ');
	for (int i = 0; i < len; i++) {
		if (isalpha(base[i]))
			cout << base[i];
		else {
			switch (base[i]) {
			case '(':
				st.push('(');
				break;
			case ')':
				while (st.top() != '(')
					pop_print();
				st.pop();
				break;
			default:
				if (char_rank(base[i]) > char_rank(st.top()))
					st.push(base[i]);
				else {
					while(char_rank(base[i]) <= char_rank(st.top()))
						pop_print();
					st.push(base[i]);
				}
			}
		}
	}
	while (st.top()!=' ')
		pop_print();

	return 0;
}
