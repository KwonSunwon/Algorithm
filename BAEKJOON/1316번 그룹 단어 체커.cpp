//1316번 그룹 단어 체커
//https://www.acmicpc.net/problem/1316

#include <iostream>
#include <string>

int main(){
    int n;
    std::string s;

    std::cin >> n;

    int r = n;

    for(int i = 0 ; i < n ; ++i){
        //std::cout << "다음 문장이 입력되었습니다.\n";
        std::cin >> s;
        std::string temp;
        temp += s[0];
        for(int j = 0 ; j < (s.length() - 1) ; ++j){
            //std::cout << s[j] << s[j+1] << "\n";
            if(s[j] != s[j+1]){
                //std::cout << "단어가 서로 다릅니다.\n";
                for(int l = 0 ; l < temp.length() ; ++l){
                    if(temp[l] == s[j+1]){
                        //std::cout << "그룹 단어가 아닙니다.\n"; 
                        --r;
                        j = s.length();
                        break;
                    }
                }
                //std::cout << "새로운 단어입니다.\n";
                temp += s[j+1];
            }
        }
    }
    std::cout << r;
}