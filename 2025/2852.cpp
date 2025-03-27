#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int score[3] = { 0 };
    int winTime[3] = { 0 };
    int lastScoreTime[3] = { 0 };
    int lastWinTeam = 0;

    int team;
    int m, s;
    for (int i = 0; i < n; i++) {
        scanf_s("%d %d:%d", &team, &m, &s);
        int scoreTime = m * 60 + s;

        score[team] += 1;
        if (score[1] > score[2]) {
            if (lastWinTeam == 0) {
                lastWinTeam = 1;
                lastScoreTime[1] = scoreTime;
            }
        }
        else if (score[1] < score[2]) {
            if (lastWinTeam == 0) {
                lastWinTeam = 2;
                lastScoreTime[2] = scoreTime;
            }
        }
        else {
            winTime[lastWinTeam] += scoreTime - lastScoreTime[lastWinTeam];
            lastWinTeam = 0;
        }
    }
    winTime[lastWinTeam] += 48 * 60 - lastScoreTime[lastWinTeam];

    for (int i = 1; i <= 2; i++) {
        printf("%02d:%02d\n", (int)(winTime[i] / 60), winTime[i] % 60);
    }
}