// Created by KwonSunwon on 2022-12-21.
// Title: 사분면 고르기
// Rating: B5
// Link: https://www.acmicpc.net/problem/14681
// Language: C++20

#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0;

    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "1";
    else if (x < 0 && y > 0)
        cout << "2";
    else if (x < 0 && y < 0)
        cout << "3";
    else if (x > 0 && y < 0)
        cout << "4";

    return 0;
}