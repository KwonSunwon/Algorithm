#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ss, n = "";
    cin >> ss;

    for (auto it = ss.rbegin(); it != ss.rend(); it++) {
        n += *it;
    }
    // n = ss;
    // reverse(n.begin(), n.end());

    if (ss == n)
        cout << 1;
    else
        cout << 0;
}