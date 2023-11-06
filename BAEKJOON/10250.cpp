/*
ACM 호텔
B3
https://www.acmicpc.net/problem/10250
*/

#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    size_t testCaseCnt;
    cin >> testCaseCnt;

    int height, width, n;
    int floor, room;

    for (int i = 0; i < testCaseCnt; i++) {
        cin >> height >> width >> n;
        if (height == 1)
            floor = 1;
        else
            floor = n % height ? n % height : height;

        if (width == 1)
            room = 1;
        else {
            room = n / height;
            if (height != 1 && n % height != 0)
                room++;
        }
        printf("%d%02d\n", floor, room);
    }
}