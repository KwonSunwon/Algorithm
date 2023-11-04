/*
행렬 덧셈
Bronze 5
https://www.acmicpc.net/problem/2738
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, m, num;
    cin >> n >> m;

    vector<vector<int>> mat;
    mat.resize(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            mat[i].push_back(num);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            mat[i][j] += num;
        }
    }

    for (auto m : mat) {
        for (auto n : m)
            cout << n << " ";
        cout << "\n";
    }
}