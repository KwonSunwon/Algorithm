/*
큰 수 A+B
Bronze 5
https://www.acmicpc.net/problem/10757
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <ranges>

using namespace std;

int main()
{
    string str_a, str_b;
    cin >> str_a >> str_b;

    vector<int> vec_a, vec_b;


    for (char s : str_a)
        vec_a.push_back(static_cast<int>(s - 48));
    for (char s : str_b)
        vec_b.push_back(static_cast<int>(s - 48));

    ranges::reverse(vec_a);
    ranges::reverse(vec_b);

}