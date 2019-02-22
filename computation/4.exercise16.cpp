#include <iostream>
#include <vector>
#include <string>

// Find the largest value in the vector v
int find_max(std::vector<int> v)
{
    int max = 0;
    for (auto x: v)
    {
        if (x>max) { max = x;}
    }
    return max;
}

int find_mode(std::vector<int> v)
{
    std::vector<int> rec;
    for (auto i=0;i<find_max(v);++i)
    {
        rec.push_back(0);
    }
    for (auto x: v)
    {
        ++rec[x];
    }
    int max_index = 0;
    for (auto i=1;i<rec.size();++i)
    {
        if(rec[i] > rec[max_index])
        {
            max_index = i;
        }
    }
    return max_index;
}

int main()
{
    std::vector<int> list = {0,3,3,3,4,4,4,5,6,6,67,7,7,7,6,6,5,54,4,4,4,54,5,6,7,9,98,6,6,5,5,45,4,3,2,2,1,1,2,3,45,65,100};  
    std::cout << find_mode(list) << '\n';
}
