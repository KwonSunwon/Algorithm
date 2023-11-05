/*
최댓값
Bronze 3
https://www.acmicpc.net/problem/2566
*/

#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int maxNumber{ -1 };
    int temp, col, row;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            cin >> temp;
            if (maxNumber < temp) {
                row = i;
                col = j;
                maxNumber = temp;
            }
        }
    }

    cout << maxNumber << "\n";
    cout << row << " " << col;
}