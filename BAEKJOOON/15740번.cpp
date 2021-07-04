//10814번 나이순 정렬
//https://www.acmicpc.net/problem/10814

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class _member
{
private:
    std::string name;
    int age;
    static int count;

public:
    _member (int age, std::string name)
    {
        this->age = age;
        this->name = name;
        this->count = _member::count;
        _member::count += 1;
    }

    static bool compare(const _member& a, const _member& b)
    {
        return a.age < b.age;
    }
    
    friend std::ostream& operator<<(std::ostream& os, const _member& p);
};

int _member::count = 0; 

std::ostream& operator<<(std::ostream& os, const _member& p)
{
    os << p.age << " " << p.name;
    return os;
}

int main()
{
    int n;

    std::cin >> n;

    std::vector<_member> members;

    int tempAge;
    std::string tempName;

    for(int _i = 0 ; _i < n ; ++_i)
    {
        std::cin >> tempAge;
        std::cin >> tempName;
        _member temp = {tempAge, tempName};
        members.push_back(temp);
    }

    stable_sort(members.begin(), members.end(), _member::compare);  //앞뒤 원소의 값이 같을 경우 정렬을 진행하지않음
                                                                    //즉, 초기 순서 그대로 
    for(auto i : members)
        std::cout << i << "\n";

    return 0;
}
