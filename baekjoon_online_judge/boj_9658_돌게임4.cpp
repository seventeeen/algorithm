#include <iostream>

using namespace std;

int main(void)
{
    int x;
    cin >> x;
    cout << ((x%7 == 1) || (x%7 == 3) ? "CY" : "SK");
}
