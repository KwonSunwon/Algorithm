/*
킹, 퀸, 룩, 비숍, 나이트, 폰
Bronze 5
https://www.acmicpc.net/problem/3003
*/

#include <iostream>

using namespace std;

int main()
{
    int king, queen, rook, bishop, knight, pawn;
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    cout << 1 - king << " "
        << 1 - queen << " "
        << 2 - rook << " "
        << 2 - bishop << " "
        << 2 - knight << " "
        << 8 - pawn;
}