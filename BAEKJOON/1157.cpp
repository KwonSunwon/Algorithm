/*
단어 공부
Bronze 1
https://www.acmicpc.net/problem/1157
*/

#include <iostream>
#include <string>
#include <array>
#include <ranges>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string str;
    array<int, 26> alpha{ 0 };

    cin >> str;

    if (str.length() == 1) {
        cout << static_cast<char>(toupper(str.front()));
        return 0;
    }

    for (char c : str) {
        alpha[toupper(c) - 65]++;
    }

    int maxAlpha{ -1 };
    int maxIdx{ -1 };
    for (int i = 0; i < 26; i++) {
        if (maxAlpha < alpha[i]) {
            maxAlpha = alpha[i];
            maxIdx = i + 65;
        }
        else if (maxAlpha == alpha[i]) {
            maxIdx = 63;
        }
    }
    cout << static_cast<char>(maxIdx);
}