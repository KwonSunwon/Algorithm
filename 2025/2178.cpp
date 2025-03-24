#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[] = { 0, -1, 0, 1 };
int dy[] = { -1, 0, 1, 0 };

queue<pair<int, int>> que;
vector<vector<bool>> maze;
vector<vector<int>> visted;
int n, m;

void BFS(int sy, int sx);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> m;

	char temp;
	vector<bool> tempVec;
	vector<int> tempVis = vector<int>(m, 0);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> temp;
			tempVec.push_back(temp - '0');
		}
		maze.push_back(tempVec);
		visted.push_back(tempVis);
		tempVec.clear();
	}

	BFS(0, 0);
	cout << visted[n - 1][m - 1];
}

void BFS(int sy, int sx)
{
	que.push({ sy, sx });
	visted[sy][sx] = 1;

	int x, y, nx, ny;
	while(!que.empty()) {
		y = que.front().first;
		x = que.front().second;
		que.pop();

		for(int i = 0; i < 4; i++) {
			ny = dy[i] + y;
			nx = dx[i] + x;
			if(nx >= 0 && nx < m && ny >= 0 && ny < n) {
				if(visted[ny][nx] > 0 || !maze[ny][nx])
					continue;
				visted[ny][nx] = visted[y][x] + 1;
				que.push({ ny, nx });
			}
		}
	}
}