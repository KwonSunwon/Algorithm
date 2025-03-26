#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int h, w;
	cin >> h >> w;
	string str;
	vector<int> map;
	for(int i = 0; i < h; i++) {
		cin >> str;
		for(auto c : str) {
			if(c == 'c')
				map.push_back(0);
			else if(c == '.')
				map.push_back(-1);
		}
		for(int j = 0; j < w; j++) {
			if(map[j] == 0) {
				for(int k = j + 1; k < w; k++) {
					if(map[k] == -1)
						map[k] = map[k - 1] + 1;
					else
						map[k] = min(map[k - 1] + 1, map[k]);
				}
			}
		}
		for(auto m : map)
			cout << m << " ";
		cout << "\n";
		map.clear();
	}

}