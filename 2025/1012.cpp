#include <iostream>
#include <vector>

using namespace std;

int m, n;

vector<vector<bool>> map;
vector<vector<bool>> visted;

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, -1, 0, 1 };

bool dfs(int sy, int sx);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, k;
    cin >> t;

    int x, y, worm;
    while (t > 0) {
        cin >> m >> n >> k;
        for (int i = 0; i < n; i++) {
            map.push_back(vector<bool>(m, false));
            visted.push_back(vector<bool>(m, false));
        }

        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            map[y][x] = true;
        }

        worm = 0;
        for (int sy = 0; sy < n; sy++) {
            for (int sx = 0; sx < m; sx++) {
                if (dfs(sy, sx))
                    worm++;
            }
        }

        map.clear();
        visted.clear();
        t--;

        cout << worm << '\n';
    }
}

bool dfs(int sy, int sx)
{
    if (!map[sy][sx] || visted[sy][sx])
        return false;

    visted[sy][sx] = true;
    int nx, ny;
    for (int i = 0; i < 4; i++) {
        ny = sy + dy[i];
        nx = sx + dx[i];
        if (ny < 0 || ny >= n || nx < 0 || nx >= m)
            continue;
        dfs(ny, nx);
    }

    return true;
}
