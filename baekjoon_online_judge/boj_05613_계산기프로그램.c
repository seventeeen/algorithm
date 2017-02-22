/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5613
 *
 */

#include<stdio.h>

int main(void) {
	int result, num;
	char op[2];
	scanf("%d", &result);
	while (1) {
		scanf("%s", op);
		if (op[0] == '=')
			break;

		scanf("%d", &num);
		if (op[0]=='+')
			result += num;
		else if (op[0]=='-')
			result -= num;
		else if (op[0] == '*')
			result *= num;
		else if (op[0] == '/')
			result /= num; 
	}
	printf("%d", result);
	return 0;
}
