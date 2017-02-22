/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3036
 *
 */

#include <iostream>
 
using namespace std;
void GCD(int a, int b, int* gcd) {
    int x = a, y = b, z;
    while (1) {
        z = x%y;
        if (!z)
            break;
        x = y;
        y = z;
    }
    *gcd=y;
}
int main(void){
    int N, F, val, gcd;
    cin >> N >> F;
    for (int i = 1; i < N; i++) {
        cin >> val;
        GCD(F, val, &gcd);
        cout << F / gcd << "/" << val / gcd << endl;
    }
    return 0;
}
