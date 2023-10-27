/*
X보다 작은 수
Bronze 5
https://www.acmicpc.net/problem/10871
*/

#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, x;

    cin >> n >> x;

    vector<int> arr(n);
    for (auto& a : arr)
        cin >> a;

    for (const auto a : arr
        | views::filter([x](int n) {return n < x;}))
        cout << a << " ";
}