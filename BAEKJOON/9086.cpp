/*
문자열
Bronze 5
https://www.acmicpc.net/problem/9086
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int caseCount;
    cin >> caseCount;
    string str;
    for (int i = 0; i < caseCount; i++) {
        cin >> str;
        cout << str.front() << str.back() << "\n";
    }
}