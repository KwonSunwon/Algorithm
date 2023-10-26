/*
공 넣기
Bronze 3
https://www.acmicpc.net/problem/10810
*/

#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

int main()
{
    int basketCount, caseCount;
    int startBasket, endBasket, ballNumber;

    cin >> basketCount >> caseCount;

    vector<int> baskets(basketCount + 1, 0);

    for (int i = 0; i < caseCount; i++) {
        cin >> startBasket >> endBasket >> ballNumber;
        for (auto& basket : baskets | views::drop(startBasket) | views::take(endBasket - startBasket + 1)) {
            basket = ballNumber;
        }
    }

    for (auto& basket : baskets | views::drop(1)) {
        cout << basket << " ";
    }
}
