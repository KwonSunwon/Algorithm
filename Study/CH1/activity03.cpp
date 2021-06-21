#include <queue>
#include <iostream>
#include <string> //std::string 클래스는 이거 없어도 가능합니까?

class Job
{
    int job_id;
    std::string name;
    int pages;

    static int id_count;
    
public:
    Job (std::string n, int p)
    {
        job_id = id_count++;
        name = n;
        pages = p;
    }

    friend std::ostream& operator<< (std::ostream& os, const Job& j) //operator overloading 공부가 좀 필요하다;;
    {
        os << "작업번호 : " << j.job_id << " 사용자 : " << j.name << " 페이지 수 : " << j.pages << std::endl;
        return os;
    }

    void printjob() //상황에 따라 다르겠지만 굳이 함수로 처리할 필요가 있을까?
    {
        std::cout << job_id << ", " << name << ", " << pages << std::endl;
    }
};

class Printer
{
private:
    std::queue<Job> task;

public:
    void addjob(Job* j)
    {
        task.push(*j);
        //std::cout << "addjob";
    }

    void printout()
    {
        //std::cout << "in printout1";
        while(true)
        {
            //std::cout << "in printout2";
            std::cout << task.front();
            //job.printjob();
            task.pop();
            if (task.empty())
                break;
        }
    }
};

int Job::id_count = 1;

int main()
{
    Printer tasks1;

    Job j1 = {"Kim", 3};
    Job j2 = {"Jung", 4};
    Job j3 = {"Kwon", 1};
    
    tasks1.addjob(&j1);
    tasks1.addjob(&j2);
    tasks1.addjob(&j3);

    tasks1.printout();

    return 0;
}
