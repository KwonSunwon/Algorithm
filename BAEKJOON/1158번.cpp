//1158번 요세푸스 문제
//https://www.acmicpc.net/problem/1158

#include <iostream>
#include <list>

int main()
{
    int N, K;

    std::cin >> N;
    std::cin >> K;

    std::list<int> squence;
    
    for(int _i = 0 ; _i < N ; ++_i)
        squence.push_back(_i+1);

    auto it = squence.begin();

    it++;
    it++;
    std::cout << *it << ", ";
    it = squence.erase(it);
    it--;

    for(int _i = 0 ; _i < K ; ++_i)
        {
            if(it == squence.end())
                it = squence.begin();
            ++it;
        }
    std::cout << *it << ", ";
    it = squence.erase(it);
    it--;

    for(int _i = 0 ; _i < K ; ++_i)
        {
            if(it == squence.end())
                it = squence.begin();
            ++it;
        }
    std::cout << *it << ", ";
    it = squence.erase(it);
    it--;
    
    for(int _i = 0 ; _i < K ; ++_i)
        {
            if(it == squence.end())
                it = squence.begin();
            ++it;
        }
    std::cout << *it << ", ";
    it = squence.erase(it);
    it--;
    std::cout << "\n (7제거 후 " << *it << ") ";

    for(int _i = 0 ; _i < K ; ++_i)
        {
            if(it == squence.end())
                it = squence.begin();
            ++it;
        }
    std::cout << *it << ", ";
    it = squence.erase(it);
    it--;

    std::cout << "\n" << *it;

    ++it;
    if(it == squence.end())
        std::cout << "end()\n";
    std::cout << *it;

/*
    std::cout << "<";
    while(!squence.empty())
    {
        for(int _i = 0 ; _i < K ; ++_i)
        {
            if(it == squence.end())
                it = squence.begin();
            ++it;
        }
        std::cout << *it << ", ";
        it = squence.erase(it);
        it--;
    }
    std::cout << ">";
*/
}
