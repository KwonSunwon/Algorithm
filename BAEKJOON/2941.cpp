/*
크로아티아 알파벳
Silver 5
https://www.acmicpc.net/problem/2941
*/

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int alphaCount{ 0 };
    for (int idx{ 0 }; idx < str.length(); idx++) {
        if (str[idx] == 'c') {
            if (str[idx + 1] == '-' || str[idx + 1] == '=')
                idx++;
        }
        else if (str[idx] == 'd') {
            if (str[idx + 1] == '-')
                idx++;
            else if (str[idx + 1] == 'z' && str[idx + 2] == '=')
                idx += 2;
        }
        else if (str[idx] == 'l') {
            if (str[idx + 1] == 'j')
                idx++;
        }
        else if (str[idx] == 'n') {
            if (str[idx + 1] == 'j')
                idx++;
        }
        else if (str[idx] == 's') {
            if (str[idx + 1] == '=')
                idx++;
        }
        else if (str[idx] == 'z') {
            if (str[idx + 1] == '=')
                idx++;
        }
        alphaCount++;
    }

    cout << alphaCount;
}