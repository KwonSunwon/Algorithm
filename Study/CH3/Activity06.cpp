#include <iostream>
#include <unordered_map>
#include <string>

/*
class URL
{
private:
    std::unordered_map<std::string, std::string> url;
public:
    void insert(const std::string& original, const std::string& shorten)
    {

    }

};
*/

void findURL(const std::unordered_map<std::string,std::string>& container, const std::string& element )
{
    auto it = container.find(element);
    if(it == container.end())
        std::cout << "검색 실패\n";
    else
        std::cout << it->second << "\n";
}

int main()
{
    std::unordered_map<std::string, std::string> url;

    url.insert(std::pair<std::string, std::string>("navar", "www.navar.com"));

    findURL( url ,"navar");

    url.insert(std::pair<std::string,std::string>("google","www.google.co.kr"));

    findURL( url, "google");

    findURL( url, "yahoo");

    bool ok = url.insert(std::pair<std::string,std::string>("google", "www.google.com")).second;        //second 는 std::unordered_map::insert의 두번째 return 값인 bool을 돌려주는 역할을 함
    std::cout << (ok ? "susses" : "failed") << "\n";                                                    //std::unordered::insert 는 std::pair<iterator, bool>을 반환하는데
                                                                                                        //여기서 두번째 인자, 즉 bool을 인자로 하는 요소가 .second임
    findURL( url, "google");

    url.erase("google");
    url.insert(std::pair<std::string,std::string>("google", "www.google.com"));
    findURL(url, "google");

    std::pair<std::unordered_map<std::string, std::string>::iterator ,bool> ok2  = url.insert(std::pair<std::string,std::string>("google.uk", "www.google.co.uk"));

    if (ok2.second)
    {
        std::cout << "성공";
    }
    
    
}
