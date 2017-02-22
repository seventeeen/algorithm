/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1924
 *
 */

#include <stdio.h>
 
 
int main(void){
     
    int x, y, i, result;
    int day=0;

	scanf("%d %d", &x, &y);

    for(i=1;i<x;i++){
		switch(i){
		case 2:
			day+=28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day+=30;
			break;
		default:
			day+=31;
		}
    }
     
    day += y;
    result = day%7;
     
	switch(result){
	case 1:	
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	default:
		printf("SUN");
	}
    return 0;
     
    }
