#include <iostream>
#include <vector>
#include <algorithm>

class Student
{
private:
    std::pair<int, int> name;
    bool vaccinated;

public:
    Student (std::pair<int,int> n, bool b) :
        name(n), vaccinated(b) {}
    
    auto get_name(){return name;}
    auto is_vaccinated(){return vaccinated;}

    bool operator == (const Student& other) const
    {
        return this->name == other.name;
    }
    bool operator< (const Student& other) const
    {
        return this->name < other.name;
    }
    bool operator> (const Student& other) const
    {
        return this->name > other.name;
    }
};

bool binary_search(Student N, std::vector<Student>& S)
{
    auto first = S.begin();
    auto last = S.end();

    while(true)
    {
        auto range_length = std::distance(first, last);
        auto mid_element_index = std::floor(range_length / 2);
        auto mid_element = *(first + mid_element_index);

        if(mid_element == N && mid_element.is_vaccinated() == false)
            return true;
        else if(mid_element == N && mid_element.is_vaccinated() == true)
            return false;
        else if( mid_element > N)
            std::advance(last,-mid_element_index);
        if (mid_element < N)
            std::advance(first, mid_element_index);
        
        if (range_length == 1)
            return true;

    }
}

int main()
{
    std::vector<Student> studentList;

    Student lee = {std::pair<int,int>(1,1),1};
    Student kim = {std::pair<int,int>(2,1),1};
    Student jung = {std::pair<int,int>(1,4),1};
    
    studentList.push_back(lee);
    studentList.push_back(kim);
    studentList.push_back(jung);

    std::cout << (binary_search(kim,studentList) ? "접종 필요\n" : "접종 완료\n");

    Student young = {std::pair<int, int>(3,4), 1};

    std::cout << (binary_search(young,studentList) ? "접종 필요\n" : "접종 완료\n");
}
