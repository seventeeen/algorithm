#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(void)
{
    int result = 0;
    string s;
    cin >> s;

    for (int i = 0; i < 26; i++) {
        bool arr[26] = {false, };
        for (int j = s.find_first_of(i + 'A') + 1; j < s.find_last_of(i + 'A'); j++)
            arr[s.at(j) - 'A'] =  !arr[s.at(j) - 'A'];
        for (int j = 0; j < 26; j++)
            if(arr[j]) result++;
    }

    cout << (result / 2);

    return 0;
}
