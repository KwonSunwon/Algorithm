/*
알파벳 찾기
Bronze 2
https://www.acmicpc.net/problem/10809
*/

#include <iostream>
#include <string>
#include <ranges>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;

    for (char s : ranges::iota_view(97, 123)) {
        auto it = find(str.begin(), str.end(), s);
        if (it == str.end())
            cout << "-1 ";
        else
            cout << distance(str.begin(), it) << " ";
    }
}