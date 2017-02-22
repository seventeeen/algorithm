/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1094
 *
 */

#include<stdio.h>
 
int main(){
    int X, k=0;
    scanf("%d", &X);
    while(X){
        k+=X&1;
        X>>=1;
    }
    printf("%d", k);
    return 0;
}
