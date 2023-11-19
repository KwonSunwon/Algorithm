/*
네 번째 점
B3
https://www.acmicpc.net/problem/3009
*/

#include <iostream>

using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    int x4, y4;
    x4 = x1 == x2 ? x3 : x1 == x3 ? x2 : x1;
    y4 = y1 == y2 ? y3 : y1 == y3 ? y2 : y1;
    cout << x4 << " " << y4;
}