#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

vector<vector<int>> map;
vector<vector<int>> mapCopy;

pair<int, int> virusPos[10];

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, -1, 0, 1 };
int n, m;

void DFS(pair<int, int> pos);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    int virus = 0;
    int temp;
    map.assign(n, vector<int>(m));
    mapCopy.assign(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
            if (map[i][j] == 2)
                virusPos[virus++] = { i, j };
        }
    }

    int maxSafe = 0;
    int wall[3];
    for (wall[0] = 0; wall[0] < n * m; wall[0]++) {
        if (map[wall[0] / m][wall[0] % m] != 0)
            continue;
        for (wall[1] = wall[0] + 1; wall[1] < n * m; wall[1]++) {
            if (map[wall[1] / m][wall[1] % m] != 0)
                continue;
            for (wall[2] = wall[1] + 1; wall[2] < n * m; wall[2]++) {
                if (map[wall[2] / m][wall[2] % m] != 0)
                    continue;

                copy(map.begin(), map.end(), mapCopy.begin());
                for (int i = 0; i < 3; i++)
                    mapCopy[wall[i] / m][wall[i] % m] = 1;

                for (int i = 0; i < virus; i++)
                    DFS(virusPos[i]);

                int safe = 0;
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < m; j++)
                        if (mapCopy[i][j] == 0)
                            safe++;

                maxSafe = max(maxSafe, safe);
            }
        }
    }
    cout << maxSafe;
}

void DFS(pair<int, int> pos)
{
    int y, x;
    tie(y, x) = pos;

    int ny, nx;
    for (int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];

        if (ny < 0 || ny >= n || nx < 0 || nx >= m)
            continue;
        if (mapCopy[ny][nx] != 0)
            continue;
        mapCopy[ny][nx] = 2;
        DFS({ ny, nx });
    }
}
