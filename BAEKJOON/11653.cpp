/*
소인수분해
B1
https://www.acmicpc.net/problem/11653
*/

#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << "\n";
            n /= i;
            i = 1;
            continue;
        }
    }
    cout << n << "\n";
}