/*
직사각형에서 탈출
B3
https://www.acmicpc.net/problem/1085
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    cout << min(x, min(w - x, min(y, h - y)));
}