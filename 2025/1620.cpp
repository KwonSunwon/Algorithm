#include <iostream>
#include <string>
#include <map>

using namespace std;

string strPokedex[100'001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, int> mapPokedex;

    string temp;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        strPokedex[i] = temp;
        mapPokedex.insert(pair<string, int>(temp, i));
    }

    for (int i = 0; i < m; i++) {
        cin >> temp;
        if (temp.front() >= 'A') {
            cout << mapPokedex.find(temp)->second << "\n";
        }
        else {
            cout << strPokedex[stoi(temp)] << "\n";
        }
    }
}