#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ss;
    cin >> ss;

    int alpha[26] = { 0 };

    for (char c : ss) {
        alpha[c - 'A']++;
    }

    // 불가능한 조건
    // 2개 이상의 알파벳이 홀수
    int oddCnt = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] & 1) {
            oddCnt++;
        }
    }
    if (oddCnt > 1) {
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    string ret;
    for (int i = 25; i >= 0; i--) {
        while (alpha[i] >= 2) {
            alpha[i] -= 2;
            ret.insert(ret.begin(), (char)(i + 'A'));
            ret.insert(ret.end(), (char)(i + 'A'));
        }
        if (alpha[i] == 1)
            ret.insert(ret.begin() + ret.size() / 2, i + 'A');
    }

    cout << ret;
}