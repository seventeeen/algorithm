/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1978
 *
 */

#include<stdio.h>
#include<math.h>
int main() {
	int arr[100] = { 0, };
	int i, N, temp, cnt, result=0;
	scanf("%d", &N); 
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		temp = (int)sqrt(arr[i]);
		cnt = 0;
		while (temp > 1) {
			if (arr[i] % temp == 0) {
				cnt++;
				break;
			}
			temp--;
		}
		if (cnt == 0 && arr[i] != 1)
			result++;
	}
	printf("%d", result);

	return 0;
}
