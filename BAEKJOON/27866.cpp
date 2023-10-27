/*
문자와 문자열
Bronze 5
https://www.acmicpc.net/problem/27866
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int i;
    cin >> str >> i;

    cout << str[i - 1];
}