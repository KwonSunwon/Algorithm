#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, -1, 0, 1 };

int map[101][101];
int visisted[101][101];
int m, n, k;

int BFS(int sy, int sx);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> m >> n >> k;

	fill(&map[0][0], &map[0][0] + 101 * 101, 0);
	fill(&visisted[0][0], &visisted[0][0] + 101 * 101, false);

	int x1, y1, x2, y2;
	for(int i = 0; i < k; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for(int y = y1; y < y2; y++)
			for(int x = x1; x < x2; x++)
				map[y][x] = 1;
	}

	int count = 0;
	vector<int> areas;
	for(int y = 0; y < m; y++) {
		for(int x = 0; x < n; x++) {
			if(map[y][x] == 1 || visisted[y][x])
				continue;
			count++;
			areas.push_back(BFS(y, x));
		}
	}
	sort(areas.begin(), areas.end());

	cout << count << '\n';
	for(int area : areas)
		cout << area << ' ';
}

int BFS(int sy, int sx)
{
	int y, x, ny, nx;
	queue<pair<int, int>> que;

	que.push({ sy, sx });
	visisted[sy][sx] = true;

	int area = 1;
	while(!que.empty()) {
		tie(y, x) = que.front();
		que.pop();

		for(int i = 0; i < 4; i++) {
			ny = y + dy[i];
			nx = x + dx[i];
			if(ny < 0 || ny >= m || nx < 0 || nx >= n)
				continue;
			if(map[ny][nx] == 1 || visisted[ny][nx])
				continue;

			visisted[ny][nx] = true;
			area++;
			que.push({ ny, nx });
		}
	}
	return area;
}