#include <iostream>
#include <string>

using namespace std;

char volwels[] = { 'a', 'e', 'i', 'o', 'u' };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    bool flag;
    while (true) {
        cin >> s;
        if (s == "end")
            break;

        flag = true;
        for (int i = 0; i < 5; i++)
            if (s.find(volwels[i]) != s.npos) {
                flag = false;
                break;
            }
        if (flag) {
            cout << "<" << s << "> is not acceptable.\n";
            continue;
        }

        flag = false;
        if (s.size() >= 3)
            for (int i = 0; i < s.size() - 2; i++) {
                string sub = s.substr(i, 3);

                int cnt = 0;
                for (char c : sub) {
                    bool f = false;
                    for (int j = 0; j < 5; j++)
                        if (c == volwels[j]) {
                            f = true;
                            break;
                        }
                    if (f)
                        cnt++;
                }

                if (cnt == 0 || cnt == 3) {
                    flag = true;
                    break;
                }
            }
        if (flag) {
            cout << "<" << s << "> is not acceptable.\n";
            continue;
        }

        flag = false;
        if (s.size() >= 2)
            for (int i = 0; i < s.size() - 1; i++)
                if (s[i] == s[i + 1])
                    if (s[i] != 'e' && s[i] != 'o') {
                        flag = true;
                        break;
                    }
        if (flag) {
            cout << "<" << s << "> is not acceptable.\n";
            continue;
        }

        cout << "<" << s << "> is acceptable.\n";
    }
}