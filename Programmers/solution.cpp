#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    int cnt = 0;
    vector<int> answer;

    while(!progresses.empty()){
        for(int i = 0; i < progresses.size(); ++i){
            progresses[i] += speeds[i];
        }

        if(progresses.front() >= 100){
            while( progresses[cnt] >= 100){
                ++cnt;
            }
            if(cnt = 1){
                progresses.erase(progresses.begin());
                speeds.erase(speeds.begin());
            }
            else{
                progresses.erase(progresses.begin(), progresses.begin() + cnt - 1 );
                speeds.erase(speeds.begin(), speeds.begin() + cnt - 1);
            }
            answer.push_back(cnt);
            cnt = 0;
        }
    }
    return answer;
}

int main(){
    vector<int> progresses = {95, 90, 99, 99, 80, 99};
    vector<int> speeds = {1, 1, 1, 1, 1, 1};

    auto answer = solution(progresses,speeds);
    
    for (auto i : answer)
        std::cout << i << " ";
    std::cout << "\n";

}
