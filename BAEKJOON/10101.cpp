/*
삼각형 외우기
B4
https://www.acmicpc.net/problem/10101
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 60 && a == b && a == c)
        cout << "Equilateral";
    else if (a + b + c == 180) {
        if (a == b || a == c || b == c)
            cout << "Isosceles";
        else
            cout << "Scalene";
    }
    else
        cout << "Error";
}