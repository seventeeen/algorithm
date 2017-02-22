/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10819
 *
 */

#include <iostream>
#include <cstdio>
#include <cmath>
 
using namespace std;
 
int maxval = -1;
 
void construct(int result[], int c[], int k, int n, int *ncand) {
    bool in_perm[9] = { false, };
    for (int i = 0; i < k; i++) in_perm[result[i]] = true;
 
    *ncand = 0;
    for (int i = 1; i <= n; i++) {
        if (!in_perm[i]) {
            c[*ncand] = i;
            *ncand += 1;
        }
    }
}
 
void backtrack(int result[], int k, int n, int arr[]) {
    int c[8];
    int ncand;
    if (k == n) {
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
            sum += abs(arr[result[i] - 1] - arr[result[i + 1] - 1]);
        if (sum > maxval)
            maxval = sum;
    }
    else {
        construct(result, c, k, n, &ncand);
        for (int i = 0; i < ncand; i++) {
            result[k] = c[i];
            backtrack(result, k + 1, n, arr);
        }
    }
}
 
int main(void) {
    int result[8] = { 0, };
    int n;
    cin >> n;
    int arr[8];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    backtrack(result, 0, n, arr);
    cout << maxval;
    return 0;
}
