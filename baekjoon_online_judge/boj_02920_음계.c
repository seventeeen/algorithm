/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2920
 *
 */

#include<stdio.h>\

int main(){
	int arr[8] = { 0, }, i, cnt=0;
	for (i = 0; i < 8; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < 7; i++)
		arr[i] = arr[i + 1] - arr[i];
	for (i = 0; i < 7; i++) {
		if (arr[i] == 1)
			cnt++;
		if (arr[i] == -1)
			cnt--;
	}

	if (cnt == 7)
		printf("ascending");
	else if (cnt == -7)
		printf("descending");
	else
		printf("mixed");

	return 0;
}
