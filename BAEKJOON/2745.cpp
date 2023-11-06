/*
진법 변환
B2
https://www.acmicpc.net/problem/2745
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    string number;
    cin >> number;

    int B;
    cin >> B;

    int result{ 0 };
    size_t digit{ number.length() - 1 };
    int num;

    for (auto n : number) {
        if (n < 58)
            num = n - 48;
        else
            num = n - 55;
        result += num * pow(B, digit--);
    }
    cout << result;
}