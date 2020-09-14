//10814번 나이순 정렬
//https://www.acmicpc.net/problem/10814

#include <iostream>
#include <string>

using namespace std;

class User{
private:
    string name;
    int age;
    int sn{};
public:
    User(string name, int age, int sn) : name(name), age(age), sn(sn) {  }
    User(){
        name = " ";
        age = 0;
        sn = 0;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    int getSn(){
        return sn;
    }
};

int main(){
    int n;
    scanf("%d", &n);

    int age;
    string name;
    User users[n];
    
    for(int i = 0 ; i < n ; ++i){
        cin >> age >> name;
        users[i] = User(name, age, i);
    }

    for( int i = 0 ; i < n ; ++i )
        for(int j = 0 ; j < n ; ++j){
            if(i != j)
                if( users[i].getAge() < users[j].getAge()){
                    User temp = users[i];
                    users[i] = users[j];
                    users[j] = temp;
                }
                else if(users[i].getAge() == users[j].getAge())
                    if(users[i].getSn() < users[j].getSn()){
                        User temp = users[i];
                        users[i] = users[j];
                        users[j] = temp;
                    }
        }
    for(int i = 0 ; i < n ; ++i){
        printf("%d %p", users[i].getAge(), users[i].getName());
    }
}
