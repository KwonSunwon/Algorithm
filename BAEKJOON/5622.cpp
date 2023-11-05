/*
다이얼
Bronze 2
https://www.acmicpc.net/problem/5622
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> dialog{
    {'A', 3}, {'B', 3}, {'C', 3},
    {'D', 4}, {'E', 4}, {'F', 4},
    {'G', 5}, {'H', 5}, {'I', 5},
    {'J', 6}, {'K', 6}, {'L', 6},
    {'M', 7}, {'N', 7}, {'O', 7},
    {'P', 8}, {'Q', 8}, {'R', 8}, {'S', 8},
    {'T', 9}, {'U', 9}, {'V', 9},
    {'W', 10}, {'X', 10}, {'Y', 10}, {'Z', 10}
};

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string dial;
    cin >> dial;

    int time{ 0 };
    for (char d : dial) {
        time += dialog[d];
    }
    cout << time;
}