/*
빠른 A+B
Bronze 4
https://www.acmicpc.net/problem/15552
*/

#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int count;
    int a, b;
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}