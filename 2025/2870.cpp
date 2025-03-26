#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string s;
    vector<string> arr;
    string num;
    bool isFindNum;
    for (int i = 0; i < n; i++) {
        cin >> s;
        isFindNum = false;
        num = " ";
        for (auto it = s.begin(); it != s.end(); it++) {
            if (!isFindNum && '0' <= *it && *it <= '9') {
                isFindNum = true;
                num = *it;
            }
            else if (isFindNum) {
                if ('0' <= *it && *it <= '9') {
                    num += *it;
                }
                else {
                    isFindNum = false;
                    int cnt = 0;
                    for (char c : num) {
                        if (c != '0')
                            break;
                        cnt++;
                    }
                    if (cnt == num.size())
                        arr.push_back("0");
                    else
                        arr.push_back(num.substr(cnt));
                    num = " ";
                }
            }
        }
        if (num != " ") {
            int cnt = 0;
            for (char c : num) {
                if (c != '0')
                    break;
                cnt++;
            }
            if (cnt == num.size())
                arr.push_back("0");
            else
                arr.push_back(num.substr(cnt));
        }
    }

    sort(arr.begin(), arr.end(), [](string l, string r) {
        if (l.size() == r.size())
            return l < r;
        if (l.size() < r.size())
            return true;
        return false;
        });

    for (auto a : arr) {
        cout << a << '\n';
    }
}