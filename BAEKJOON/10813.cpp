/*
공 바꾸기
Bronze 2
https://www.acmicpc.net/problem/10813
*/

#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int basketCount, caseCount;
    cin >> basketCount >> caseCount;

    vector<int> baskets(basketCount + 1);
    iota(baskets.begin(), baskets.end(), 0);

    for (int idx : ranges::iota_view{ 0, caseCount }) {
        int basket1, basket2, temp;
        cin >> basket1 >> basket2;
        temp = baskets[basket1];
        baskets[basket1] = baskets[basket2];
        baskets[basket2] = temp;
    }

    for (auto basket : baskets | views::drop(1))
        cout << basket << " ";
}