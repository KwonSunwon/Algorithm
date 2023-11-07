/*
세탁소 사장 동혁
B3
https://www.acmicpc.net/problem/2720
*/

#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int testCase;
    cin >> testCase;

    int change;

    for (int i = 0; i < testCase; i++) {
        cin >> change;
        cout << change / 25 << " ";
        change %= 25;
        cout << change / 10 << " ";
        change %= 10;
        cout << change / 5 << " ";
        change %= 5;
        cout << change << "\n";
    }
}