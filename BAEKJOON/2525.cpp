/*
오븐 시계
Bronze 3
https://www.acmicpc.net/problem/2525
*/

#include <iostream>

using namespace std;

int main()
{
    int hour, minute, requireMinute;
    cin >> hour >> minute >> requireMinute;

    minute += requireMinute;
    if (minute >= 60)
    {
        hour += minute / 60;
        minute = minute % 60;
    }
    if (hour >= 24)
        hour -= 24;

    cout << hour << " " << minute;
}