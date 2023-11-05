#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    deque<int> height(N);
    for (int i = 0; i < N; i++) {
        cin >> height[i];
    }

    int temp;
    deque<int> height2;
    multiset<int> result;
    int res{ 0 };
    sort(height.begin(), height.end());
    while (!height.empty()) {
        temp = height.front();
        height.pop_front();
        if (result.find(temp) == result.end()) {
            result.insert(temp);
        }
        else {
            height2.push_back(temp);
        }
    }
    res += result.size();
    result.clear();
    while (!height2.empty()) {
        temp = height2.back();
        height2.pop_back();
        if (result.find(temp) == result.end()) {
            result.insert(temp);
        }
    }
    res += result.size();
    cout << res;
}