/*
너의 평점은
Silver 5
https://www.acmicpc.net/problem/25206
*/

#include <iostream>
#include <string>
#include <array>
#include <map>

using namespace std;

map<string, long double> SCORE{
    {"A+", 4.5},
    {"A0", 4.0},
    {"B+", 3.5},
    {"B0", 3.0},
    {"C+", 2.5},
    {"C0", 2.0},
    {"D+", 1.5},
    {"D0", 1.0},
    {"F", 0}
};

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string lectureName;
    string tempScore;
    long double grade;
    long double sum{ 0 };
    int gradeSum{ 0 };

    for (int i = 0;i < 20; i++) {
        cin >> lectureName >> grade >> tempScore;
        if (tempScore == "P")
            continue;
        sum += grade * SCORE[tempScore];
        gradeSum += grade;
    }
    cout << sum / gradeSum;
}