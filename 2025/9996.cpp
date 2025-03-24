#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string pattern;
    cin >> n >> pattern;

    auto asterisk = pattern.find("*");
    string front = pattern.substr(0, asterisk);
    string back = pattern.substr(asterisk + 1);

    string name;
    for (int i = 0; i < n; i++) {
        cin >> name;
        if (name.length() < front.length() + back.length())
            cout << "NE\n";
        else if (name.starts_with(front) && name.ends_with(back))
            cout << "DA\n";
        else
            cout << "NE\n";
    }
}