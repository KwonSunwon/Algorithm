/*
분수찾기
S5
https://www.acmicpc.net/problem/1193
*/

#include <iostream>

using namespace std;

int main()
{
    int n, numerator, denominator;
    cin >> n;

    for (int i = 1; ; i++) {
        n -= i;
        if (n <= 0) {
            if (i & 1) {
                numerator = 1 + (n * -1);
                denominator = i - (n * -1);
            }
            else {
                numerator = i - (n * -1);
                denominator = 1 + (n * -1);
            }
            cout << numerator << "/" << denominator;
            return 0;
        }
    }
}