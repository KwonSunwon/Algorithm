/*
그대로 출력하기
Bronze 5
https://www.acmicpc.net/problem/11718
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string str;

    while (getline(cin, str)) {
        cout << str << '\n';
    }
}