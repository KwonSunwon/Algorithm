/*
상수
Bronze 2
https://www.acmicpc.net/problem/2908
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <ranges>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    short a, b;
    cin >> a >> b;
    string sa = to_string(a);
    string sb = to_string(b);
    ranges::reverse(sa);
    ranges::reverse(sb);
    a = stoi(sa);
    b = stoi(sb);

    if (a > b)
        cout << a;
    else
        cout << b;
}