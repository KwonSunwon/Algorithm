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

void find(const std::unordered_map<std::string,std::string>& container, const std::string& element )
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

    find( url ,"navar");

    url.insert(std::pair<std::string,std::string>("google","www.google.co.kr"));

    find( url, "google");

    find( url, "yahoo");

    bool ok = url.insert(std::pair<std::string,std::string>("google", "www.google.com")).second;
    std::cout << (ok ? "susses" : "failed") << "\n";

    find( url, "google");

    url.erase("google");
    url.insert(std::pair<std::string,std::string>("google", "www.google.com"));
    find(url, "google");
}

