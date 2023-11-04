/*
팰린드롬인지 확인하기
Bronze 2
https://www.acmicpc.net/problem/10988
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str, strRe;
    cin >> str;
    reverse_copy(str.begin(), str.end(), back_inserter(strRe));
    if (str == strRe)
        cout << 1;
    else
        cout << 0;
}