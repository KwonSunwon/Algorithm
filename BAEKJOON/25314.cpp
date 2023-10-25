/*
코딩은 체육과목 입니다.
Bronze 5
https://www.acmicpc.net/problem/25314
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    for (int i = 0; i < n / 4; i++)
        cout << "long ";
    cout << "int";
}