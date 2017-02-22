/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11943
 *
 */

#include<stdio.h>
#define SMALL(a, b) (a<b ? a : b)

int main(){
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    printf("%d", SMALL(A+D, B+C));
    return 0;
}
