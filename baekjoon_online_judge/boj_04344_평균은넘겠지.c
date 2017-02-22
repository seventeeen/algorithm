/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4344
 *
 */

#include<stdio.h>
int main(void) {
	int C, i, N, cnt;
    double avg, score[1001]={ 0, }, rate;
	for (scanf("%d", &C); C--;) {
		avg = 0;
		cnt = 0;
		scanf("%d", &N);
		for (i = 0; i < N; i++) {
			scanf("%lf", &score[i]);
			avg += score[i];
		}
		avg /= (double)N;
		for (i = 0; i < N; i++) {
			if (score[i] > avg)
				cnt++;
		}
		rate = ((double)cnt / (double)N) * 100.0;
		printf("%.3lf%%\n", rate);
	}
	return 0;
}
