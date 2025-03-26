#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, c, t;
	cin >> n >> c;

	vector<pair<int, int>> vec;

	for(int i = 0; i < n; i++) {
		cin >> t;
		auto it = find_if(vec.begin(), vec.end(), [t](pair<int, int> v) {
			return t == v.first;
			});
		if(it == vec.end())
			vec.push_back({ t, 1 });
		else
			it->second++;
	}

	stable_sort(vec.begin(), vec.end(), [](pair<int, int> v, pair<int, int> o) {
		return v.second > o.second;
		});

	for(auto v : vec) {
		for(int i = 0; i < v.second; i++)
			cout << v.first << " ";
	}
}