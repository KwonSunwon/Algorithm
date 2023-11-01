/*
단어의 개수
Bronze 2
https://www.acmicpc.net/problem/1152
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string str;
    getline(cin, str);

    if (str.back() != ' ')
        str.push_back(' ');

    bool word{ false };
    int wordCount{ 0 };
    for (char c : str) {
        if (c != ' ') {
            word = true;
        }
        else {
            if (word)
                wordCount++;
            word = false;
        }
    }

    cout << wordCount;
}