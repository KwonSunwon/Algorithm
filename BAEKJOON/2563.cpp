/*
색종이
S5
https://www.acmicpc.net/problem/2563
*/

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    array<bool, 100 * 100> board{ false };

    int caseCount;
    cin >> caseCount;

    int distanceLeft, distanceBottom;

    for (int i = 0; i < caseCount; i++) {
        cin >> distanceLeft >> distanceBottom;
        for (int row = distanceLeft; row < distanceLeft + 10; row++) {
            for (int col = 90 - distanceBottom; col < 100 - distanceBottom; col++) {
                board[col * 100 + row] = true;
            }
        }
    }

    cout << count(board.begin(), board.end(), true);
}