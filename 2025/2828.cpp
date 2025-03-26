#include <iostream>

using namespace std;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	//cout.tie(nullptr);

	int n, m, j;
	cin >> n >> m >> j;

	int l = 1;
	int r = m;

	int count = 0;

	int pos;
	for(int i = 0; i < j; i++) {
		cin >> pos;

		if(l <= pos && pos <= r)
			continue;

		if(pos < l) {
			count += l - pos;
			l = pos;
			r = l + (m - 1);
			continue;
		}

		if(r < pos) {
			count += pos - r;
			r = pos;
			l = r - (m - 1);
		}
	}

	cout << count;
}