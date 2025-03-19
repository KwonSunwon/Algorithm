#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int alpha[26] = { 0 };

    for (char c : word) {
        alpha[c - 97]++;
    }

    for (int i = 0; i < 26; i++)
        cout << alpha[i] << " ";
}