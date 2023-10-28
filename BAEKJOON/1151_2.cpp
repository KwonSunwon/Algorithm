/*
2023 제 1회 춘배컵
B번 - 무지개 만들기
https://www.acmicpc.net/contest/problem/1151/2
*/

#include <iostream>
#include <string>

using namespace std;

enum RAINBOW {
    R = 0b1000000,
    O = 0b0100000,
    Y = 0b0010000,
    G = 0b0001000,
    B = 0b0000100,
    I = 0b0000010,
    V = 0b0000001
};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int length;
    cin >> length;

    string str;
    cin >> str;

    int rainbow = 0b0000000;
    int rainbowCap = 0b0000000;

    for (auto s : str) {
        if (s == 'R') {
            rainbowCap |= R;
            continue;
        }
        if (s == 'r') {
            rainbow |= R;
            continue;
        }

        if (s == 'O') {
            rainbowCap |= O;
            continue;
        }
        if (s == 'o') {
            rainbow |= O;
            continue;
        }

        if (s == 'Y') {
            rainbowCap |= Y;
            continue;
        }
        if (s == 'y') {
            rainbow |= Y;
            continue;
        }

        if (s == 'G') {
            rainbowCap |= G;
            continue;
        }
        if (s == 'g') {
            rainbow |= G;
            continue;
        }

        if (s == 'B') {
            rainbowCap |= B;
            continue;
        }
        if (s == 'b') {
            rainbow |= B;
            continue;
        }

        if (s == 'I') {
            rainbowCap |= I;
            continue;
        }
        if (s == 'i') {
            rainbow |= I;
            continue;
        }

        if (s == 'V') {
            rainbowCap |= V;
            continue;
        }
        if (s == 'v') {
            rainbow |= V;
            continue;
        }
    }

    if (((rainbow & 0b1111111) == 0b1111111) && ((rainbowCap & 0b1111111) == 0b1111111))
        cout << "YeS";
    else if ((rainbow & 0b1111111) == 0b1111111)
        cout << "yes";
    else if ((rainbowCap & 0b1111111) == 0b1111111)
        cout << "YES";
    else
        cout << "NO!";
}