#include <iostream>
#include <vector>

using namespace std;

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, -1, 0, 1 };

int map[101][101];
int visisted[101][101];
int n, h;

bool DFS(int sy, int sx);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;

	for(int y = 0; y < n; y++) {
		for(int x = 0; x < n; x++) {
			cin >> map[y][x];
			visisted[y][x] = false;
		}
	}

	int maxSafe = 1;
	int safe;
	for(h = 1; h < 100; h++) {
		safe = 0;
		for(int y = 0; y < n; y++) {
			for(int x = 0; x < n; x++) {
				if(DFS(y, x))
					safe++;
			}
		}
		maxSafe = max(maxSafe, safe);
		for(int y = 0; y < n; y++)
			for(int x = 0; x < n; x++)
				visisted[y][x] = false;
	}
	cout << maxSafe;
}

bool DFS(int sy, int sx)
{
	if(map[sy][sx] <= h || visisted[sy][sx])
		return false;

	visisted[sy][sx] = true;

	int ny, nx;
	for(int i = 0; i < 4; i++) {
		ny = sy + dy[i];
		nx = sx + dx[i];
		if(ny >= 0 && ny < n && nx >= 0 && nx < n)
			if(map[ny][nx] > h && !visisted[ny][nx])
				DFS(ny, nx);
	}

	return true;
}