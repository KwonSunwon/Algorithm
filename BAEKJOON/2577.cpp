/*
숫자의 개수
B2
https://www.acmicpc.net/problem/2577
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;
    int result = a * b * c;
    string str = to_string(result);
    for (int i = 0; i < 10; i++) {
        cout << count(str.begin(), str.end(), static_cast<char>(i + '0')) << "\n";
    }
}