/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10828
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int stack[100000] = { 0, };
int top = -1;
void push(int x) {
	stack[++top] = x;
}
void pop() {
	if (top == -1)
		printf("-1\n");
	else
		printf("%d\n", stack[top--]);
}
void empty(){
	if (top == -1)
		printf("1\n");
	else
		printf("0\n");

}
void size() {
	printf("%d\n", top + 1);
}
void top_value() {
	if (top == -1)
		printf("-1\n");
	else
		printf("%d\n", stack[top]);
}
int main() {
	int N, i, k, j=0, x=0;
	char str[20];
	scanf("%d", &N);
	for (k = 0; k <= N; k++) {
		gets(str);
		switch (str[0]+str[1]) {
		case 'p'+'u':
			x = 0;
			j = 0;
			for (i = strlen(str)-1; i>=5; i--) {
				x += (str[i]-'0') * (int)pow(10.0, j);
				j++;
			}
			push(x);
			break;
		case 'p'+'o':
			pop();
			break;
		case 'e'+'m':
			empty();
			break;
		case 's'+'i':
			size();
			break;
		case 't'+'o':
			top_value();
			break;
		}
	}

	return 0;
}
