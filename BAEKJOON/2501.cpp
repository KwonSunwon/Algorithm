/*
약수 구하기
B3
https://www.acmicpc.net/problem/2501
*/

#include <iostream>
#include <set>
#include <ranges>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    set<int> divisor;
    for (int i = n; i >= 1; i--) {
        if (n % i == 0) {
            divisor.insert(n / i);
            if (divisor.size() == k)
                break;
        }
    }
    if (divisor.size() < k)
        cout << 0;
    else
        for (auto d : divisor | views::drop(k - 1) | views::take(1))
            cout << d;
}