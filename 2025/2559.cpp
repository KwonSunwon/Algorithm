#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int psum[100'001];
	psum[0] = 0;

	int temp;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		psum[i + 1] = psum[i] + temp;
	}

	int maxTmp = -2147483647;
	int sum;
	for(int i = 1; i <= n - (k - 1); i++) {
		maxTmp = max(maxTmp, psum[i + k - 1] - psum[i - 1]);
	}
	cout << maxTmp;
}