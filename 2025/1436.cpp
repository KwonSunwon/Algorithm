#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int title = 666;
	int cnt = 1;
	while(cnt != n) {
		if(to_string(++title).find("666") != string::npos) {
			cnt++;
		}
	}
	cout << title;
}