/*
대지
B3
https://www.acmicpc.net/problem/9063
*/

#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int dotCnt;
    cin >> dotCnt;
    if (dotCnt == 1) {
        cout << 0;
        return 0;
    }

    int x, y;
    int xMin, yMin, xMax, yMax;
    cin >> xMin >> yMin;
    cin >> x >> y;
    if (xMin < x)
        xMax = x;
    else {
        xMax = xMin;
        xMin = x;
    }
    if (yMin < y)
        yMax = y;
    else {
        yMax = yMin;
        yMin = y;
    }
    for (int i = 0; i < dotCnt - 2; i++) {
        cin >> x >> y;

        if (x < xMin)
            xMin = x;
        else if (x > xMax)
            xMax = x;

        if (y < yMin)
            yMin = y;
        else if (y > yMax)
            yMax = y;
    }
    cout << (xMax - xMin) * (yMax - yMin);
}