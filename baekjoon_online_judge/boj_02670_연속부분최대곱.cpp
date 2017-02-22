/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2670
 *
 */

#include <iostream>
#include <algorithm>
#include <cstring>
#include <stdio.h>
 
using namespace std;
 
double a[10001];
double dp[10001];
int n;
double f(int x){
    if(x>n)return 0;
    if(x==n)return dp[x]=a[x];
    if(dp[x]!=0)return dp[x];
    return dp[x]=a[x]>a[x]*f(x+1)?a[x]:a[x]*f(x+1);
}
 
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%lf",&a[i]);
    double result=f(1);
    for(int i=2;i<=n;i++){
        if(result<f(i))
            result=f(i);
    }
    printf("%.3lf\n",result);
    return 0;
}