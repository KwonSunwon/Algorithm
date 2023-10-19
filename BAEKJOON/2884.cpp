/*
알람 시계
Bronze 3
https://www.acmicpc.net/problem/2884
*/

#include <iostream>

using namespace std;

int main()
{
    int hour, minute;
    cin >> hour >> minute;

    if (minute - 45 >= 0)
    {
        minute -= 45;
    }
    else
    {
        minute = 60 + (minute - 45);
        hour == 0 ? hour = 23 : hour -= 1;
    }
    cout << hour << " " << minute;
}