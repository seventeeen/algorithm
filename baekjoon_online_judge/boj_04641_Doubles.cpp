/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-27
 * URL   : https://www.acmicpc.net/problem/4641
 *
 */

#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    while (true) {
        int result = 0;
        vector<int> arr;
        while (true) {
            int x;
            cin >> x;
            if (x == -1)
                return 0;
            if (x == 0)
                break;
            arr.push_back(x);
        }
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (arr[i] << 1 == arr[j])
                    result++;
            }
        }
        cout << result << "\n";
    }
}
