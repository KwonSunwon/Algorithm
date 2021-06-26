#include <iostream>
#include <vector>
#include <algorithm>

//enum Flag {File = 0, Directory};

struct nTree
{
    std::string name;
    //enum Flag flag;   bool si_dir; 로 대체 가능 + 대체 안되네;;
                        //boolean type 사용 이유 : if문 간략화? -> 다시 생각해보니까 되긴 할듯
    bool is_dir;
    std::vector<nTree*> children;
};

struct Filemanager
{
    using node = nTree;
    using node_ptr = node*;

private:
    nTree* root = nullptr;      // node_ptr = nullptr;
    nTree* cwd;                 //현재 위치 node_ptr = cwd;
                                //이렇게 하면 노드 구조체의 이름이 바꿔더라도 코드 수정 불필요
public:
    Filemanager()
    {
        root = new node { "/", true , {} };    //vector 선언 후 초기화 
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
        if(found != dir->children.end())        //vector.end()는 NULL??????????? +vector.end()는 EOF 비슷한 느낌으로 작동
        {
            return find_impl(*found, rest_path);
        }
        return NULL;
    }

public:
    bool add(const std::string& path, bool is_dir)
    {
        if(path[0] == '/')
        {
            return add_impl(root, path.substr(1), is_dir);
        }
        else
        {
            return add_impl(cwd, path, is_dir);
        }
    }

private:
    bool add_impl(node_ptr dir, const std::string& path, bool is_dir)
    {
        if(not dir->is_dir)
        {
            std::cout << dir->name << " is file." << std::endl;
            return false;
        }
    
        //path 에 '/'가 없다면 경로에 마지막 도달 했다는 얘기
        auto sep = path.find('/');

        if(sep == std::string::npos)
        {
            auto found = std::find_if(dir->children.begin(), dir->children.end(),[&](const node_ptr child){
                return child->name == path;
            });

            if(found != dir->children.end())
            {
                std::cout << "Already has a file/directory named " << path  << " in " << dir->name << std::endl;
                return false;
            }

            dir->children.push_back(new node {path, is_dir, {}});
            return true;
        }

        std::string next_dir = path.substr(0, sep);
        auto found = std::find_if(dir->children.begin(), dir->children.end(), [&](const node_ptr child){
            return child->name == next_dir && child->is_dir;
        });

        if (found != dir->children.end())   //해당하는 이름의 디렉토리가 존재한다면 재귀적으로 호출
        {
            return add_impl(*found, path.substr(sep+1), is_dir);
        }

        std::cout << "Is no directory named " << next_dir << " in " << dir->name << std::endl;
        return false;
    }

public:
    bool change_dir(const std::string& path)
    {
        auto found = find(path);
        if (found && found->is_dir)
        {
            cwd = found;
            std::cout << "Move " << cwd->name << std::endl;
            return true;
        }

        std::cout << "Not find " << path << std::endl;
        return false;
    }

public:
    void show_path(const std::string& path)
    {
        auto found = find(path);
        if (not found)
        {
            std::cout << "Not find " << path << std::endl;
            return;
        }

        if (found->is_dir)
        {
            for(auto child : found->children)
            {
                std::cout << (child->is_dir ? "d " : "- ") << child->name << std::endl;
            }
        }
        else
        {
            std::cout << "- " << found->name << std::endl;
        }
    }
};

int main()
{
    Filemanager fs;
    fs.add("usr", true);       // "/"에 usr 디렉토리 추가
	fs.add("etc", true);       // "/"에 etc 디렉토리 추가
	fs.add("var", true);       // "/"에 var 디렉토리 추가
	fs.add("tmp_file", false); // "/"에 tmp_file 파일 추가

	std::cout << "\"/\"의 파일/디렉토리 목록:" << std::endl;
	fs.show_path("/");        // "/"의 파일/디렉토리 목록 출력

	std::cout << std::endl;
	fs.change_dir("usr");
	fs.add("gilbut", true);
	fs.add("gilbut/Downloads", true);
	fs.add("gilbut/Downloads/newFile.cpp", false);

	std::cout << "현재 디렉토리에서 usr의 파일/디렉토리 목록: " << std::endl;
	fs.show_path("usr"); // 현재 디렉토리에는 usr 디렉토리가 없으므로 정상적으로 출력하지 못합니다.

	std::cout << "\"/usr\"의 파일/디렉토리 목록:" << std::endl;
	fs.show_path("/usr");

	std::cout << "\"/usr/gilbut/Downloads\"의 파일/디렉토리 목록" << std::endl;
	fs.show_path("/usr/gilbut/Downloads");
}
