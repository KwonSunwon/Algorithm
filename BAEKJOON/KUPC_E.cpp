#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    string str;
    cin >> str;

    int half = n / 2;
    string check;
    bool result = false;
    copy(str.begin(), str.begin() + half, back_inserter(check));
    copy(str.rbegin(), str.rbegin() + half, back_inserter(check));
    sort(check.begin(), check.end());
    for (int i = 0; i < check.size(); i += 2) {
        if (check[i] != check[i + 1]) {
            result = true;
            break;
        }
    }
    if (result)
        cout << "No";
    else
        cout << "Yes";
}