/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1004
 *
 */

#include<stdio.h>


int main(void){
	int x1, y1, x2, y2, cx, cy, r;
	int i, T;
	int D1, D2, R;
	int result;

	for(scanf("%d", &T); T--;){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		result=0;
		for(scanf("%d", &i); i--;){
			scanf("%d %d %d", &cx, &cy,&r);
			D1=(x1-cx)*(x1-cx)+(y1-cy)*(y1-cy);
			D2=(x2-cx)*(x2-cx)+(y2-cy)*(y2-cy);
			R=r*r;

			if(((D1<R)&&(D2>R)) || ((D2<R)&&(D1>R)))
				result+=1;
		}
		printf("%d\n", result);
	}
	return 0;
}
