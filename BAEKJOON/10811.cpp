/*
바구니 뒤집기
Bronze 2
https://www.acmicpc.net/problem/10811
*/

#include <iostream>
#include <ranges>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int basketCount, orderCount;
    cin >> basketCount >> orderCount;

    vector<int> baskets(basketCount);
    iota(baskets.begin(), baskets.end(), 1);

    int from, to;

    for (int order : views::iota(0, orderCount)) {
        cin >> from >> to;
        reverse(baskets.begin() + (from - 1), baskets.begin() + to);
    }

    for (int basket : baskets)
        cout << basket << " ";
}