#include <iostream>
#include <vector>
#include <string>

bool is_present(std::vector<std::string> v, std::string s)
{
    for (auto x : v)
    {
        if (x == s)
        {
            return true;
        }
    }
    return false;
}

int find_mode(std::vector<int> v)
{
    int index = 0;
    for (auto i=0;i<v.size();++i)
    {
        if (v[i] > v[index])
        {
            index = i;
        }
    }
    return index;
}

int find_max(std::vector<std::string> v)
{
    int index = 0;
    for (auto i=0;i<v.size();++i)
    {
        if (v[index] > v[i]) { index = i; }
    }
    return index;
}

int find_min(std::vector<std::string> v)
{
    int index = 0;
    for (auto i=0;i<v.size();++i)
    {
        if (v[index] < v[i]) { index = i; }
    }
    return index;
}

int main()
{
    std::vector<std::string> strings = {" ","z","z","z", "A","3","3","3","a","a","a","a","b","b","b","a","a"," ","b","c"};
    std::vector<std::string> list;
    std::vector<int> rec;

    for (auto s : strings)
    {
        if (!is_present(list,s))
        {
            list.push_back(s);
        }
    }

    for (auto x:list)
    {
        rec.push_back(0);
    }

    for (auto s : strings)
    {
        for (auto x=0;x<list.size();++x)
        {
            if (list[x] == s) {++rec[x];}
        }
    }

    for (auto x=0;x<rec.size();++x)
    {
        std::cout << x << " " << rec[x] << " " << list[x] << '\n';
    }
    std::cout << "The min string is: " << list[find_min(list)] << '\n';
    std::cout << "The max string is: " << list[find_max(list)] << '\n';
    std::cout << "The mode string is: " << list[find_mode(rec)] << '\n';
}
