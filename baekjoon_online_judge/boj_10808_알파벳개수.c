/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10808
 *
 */

#include<stdio.h>
#include<string.h>

int main(){
	int arr[26] = { 0, };
	char str[101], i;
	
	scanf("%s", str);
	
	for (i = 0; i < strlen(str); i++)
		arr[str[i] - 'a']++;
	
	for (i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
