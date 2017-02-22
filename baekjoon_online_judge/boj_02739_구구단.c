/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2739
 *
 */

#include <stdio.h>
 
int main(void){
    int N, i;
    scanf("%d", &N);
    for(i=1; i<=9; i++)
        printf("%d * %d = %d\n", N, i, N*i);
    return 0;
}
