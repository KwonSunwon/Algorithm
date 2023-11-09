/*
진법 변환 2
B1
https://www.acmicpc.net/problem/11005
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int B;
    cin >> B;

    string result;
    int num, digit;

    for (int i = 30; i >= 0; i--) {
        digit = pow(B, i);
        num = number / digit;
        number %= digit;

        if (num == 0 && result.empty())
            continue;
        if (num > 9) {
            result += num + 55;
        }
        else
            result += num + 48;
    }

    cout << result;
}