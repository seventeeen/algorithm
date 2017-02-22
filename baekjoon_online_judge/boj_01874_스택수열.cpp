/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1874
 *
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
 
using namespace std;
 
int main(void){
    string result="";
    stack<int> st;
    int n;
    cin >> n;
    int *arr = new int[n];
    int flag = 0;
    st.push(0);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        if (st.top() == arr[i]) {
            st.pop();
            result.append("-");
        }
        else if (arr[i] > flag) {
            for (int j = flag + 1; j <= arr[i]; j++) {
                st.push(j);
                result.append("+");
            }
            flag = arr[i];
            st.pop();
            result.append("-");
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    int len = result.length();
    for (int i = 0; i < len; i++)
        cout << result[i] << "\n";
    return 0;
}
