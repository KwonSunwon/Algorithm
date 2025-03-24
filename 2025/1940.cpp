#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> mat;

	int temp;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		mat.push_back(temp);
	}

	int ret = 0;
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(mat[i] == -1)
				break;
			if(mat[i] + mat[j] == m && mat[j] != -1) {
				mat[i] = mat[j] = -1;
				ret++;
				break;
			}
		}
	}

	cout << ret;
}