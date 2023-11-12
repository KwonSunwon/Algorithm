/*
배수와 약수
B3
https://www.acmicpc.net/problem/5086
*/

#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        if (a % b == 0)
            cout << "multiple\n";
        else if (b % a == 0)
            cout << "factor\n";
        else
            cout << "neither\n";
    }
}