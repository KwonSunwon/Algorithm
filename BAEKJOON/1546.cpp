/*
평균
Bronze 1
https://www.acmicpc.net/problem/1546
*/

#include <iostream>
#include <vector>
#include <ranges>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    int examCount;
    cin >> examCount;
    vector<long double> scores(examCount);
    for (auto& s : scores)
        cin >> s;

    auto maxScore = *max_element(scores.begin(), scores.end());
    for (auto& s : scores) {
        s = s / maxScore * 100;
    }

    long double sum = accumulate(scores.begin(), scores.end(), static_cast <long double>(0));
    // cout << format("{:f}", sum / examCount);
    printf("%Lf", sum / examCount);
}