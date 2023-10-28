/*
나머지
Bronze 2
https://www.acmicpc.net/problem/3052
*/

#include <iostream>
#include <ranges>
#include <set>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int input;
    set<int> arr;
    for (int idx : views::iota(0, 10)) {
        cin >> input;
        arr.insert(input % 42);
    }

    cout << arr.size();
}