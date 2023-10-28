/*
2023 제 1회 춘배컵
A번 - 감마선을 맞은 컴퓨터
https://www.acmicpc.net/contest/problem/1151/1
*/

#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    bool isChunbae, isNabi, isYeongcheol;
    isChunbae = isNabi = isYeongcheol = false;

    char ch;
    for (int i = 0; i < 225; i++) {
        cin >> ch;
        if (isChunbae || isNabi || isYeongcheol)
            continue;
        if (ch == 'w')
            isChunbae = true;
        if (ch == 'b')
            isNabi = true;
        if (ch == 'g')
            isYeongcheol = true;
    }


    if (isChunbae)
        cout << "chunbae";
    else if (isNabi)
        cout << "nabi";
    else if (isYeongcheol)
        cout << "yeongcheol";
}