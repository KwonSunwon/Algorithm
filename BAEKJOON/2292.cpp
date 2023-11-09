/*
벌집
B2
https://www.acmicpc.net/problem/2292
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }

    n--;
    for (int i = 1; ;i++) {
        n -= i * 6;
        if (n <= 0) {
            cout << i + 1;
            return 0;
        }
    }
}