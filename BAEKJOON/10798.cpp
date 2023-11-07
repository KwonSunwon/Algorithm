/*
세로읽기
B1
https://www.acmicpc.net/problem/10798
*/

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    array<array<char, 15>, 5> words;
    for (auto& word : words) {
        for (auto& alpha : word)
            alpha = '\0';
    }
    string tempWord;
    short idx;

    for (auto& word : words) {
        cin >> tempWord;
        idx = 0;
        for (char alpha : tempWord) {
            word[idx++] = alpha;
        }
    }
    for (int col = 0; col < 15; col++) {
        for (int row = 0; row < 5; row++) {
            if (words[row][col] != '\0')
                cout << words[row][col];
        }
    }
}