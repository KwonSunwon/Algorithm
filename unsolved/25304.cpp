/*
영수증
Bronze 4
https://www.acmicpc.net/problem/25304
*/

#include <iostream>
#include <vector>

using namespace std;

typedef unsigned int uint;

struct Product {
    uint price;
    uint count;
};

int main()
{
    uint totalPrice, totalCount;
    vector<Product> products;
    cin >> totalPrice >> totalCount;
    for (int i = 0; i < totalCount; i++) {
        uint price, count;
        cin >> price >> count;
        products.push_back({ price, count });
    }

    uint priceSum{ 0 };
    for (auto product : products) {
        priceSum += product.price * product.count;
    }

    if (priceSum == totalPrice)
        cout << "Yes";
    else
        cout << "No";
}