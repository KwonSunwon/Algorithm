#include <iostream>
#include <vector>
#include <algorithm>

enum Flag {File = 0, Directory};

struct nTree
{
    std::string name;
    enum Flag flag;     //bool si_dir; 로 대체 가능
    std::vector<nTree*> children;
};

struct Filemanager
{
    using node = nTree;
    using node_ptr = node*;

private:
    nTree* root = nullptr;      // node_ptr = nullptr;
    nTree* cwd;                 //현재 위치 node_ptr = cwd;

public:
    Filemanager()
    {
        root = new node { "/", Directory, {} };    //vector 선언 후 초기화 
        cwd = root;
    }

    node_ptr find(const std::string& path)
    {
        if(path[0] == '/') //절대경로
        {
            return find_impl(root, path.substr(1));     //std::stirng.substr(size_t idex, size_t len) idex부터 len까지 문자열을 추출
        }                                               //여기선 루트노드의 '/'를 무시하고 다음열부터 받음
        else //상대경로
        {
            return find_impl(cwd, path);
        }
    }

private:
    node_ptr find_impl(node_ptr dir, const std::string& path)
    {
        if(path.empty())
            return dir;     //path 가 비어있다면 현재 위치를 return 
        auto sep = path.find('/');      //path 문자열에서 가장 앞열에 있는 '/'를 찾음
        std::string current_path = sep == std::string::npos ? path : path.substr(0, sep);
        //'/' 를 못 찾았다면 전체경로를 제공, 찾았다면 path의 시작부터 '/'까지 제공
        std::string rest_path = sep == std::string::npos ? "" : path.substr(sep + 1);
        //'/' 를 못 찾았다면 뒤에 남은 경로는 없음, 찾았다면 '/'뒤에 전부 제공
        auto found = std::find_if(dir->children.begin(), dir->children.end(),
            [&](const node_ptr child){
                return child->name == current_path;
            });
        //현재 dir의 하위 dir에서 주어진 경로(이름)의 dir를 찾음
        if(found != dir->children.end())        //vector.end()는 NULL???????????
        {
            return find_impl(*found, rest_path);
        }
        return NULL;
    }


};
