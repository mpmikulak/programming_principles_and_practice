#include<iostream>

int square(int v) 
{
    int result = 0;
    for (auto i = 0; i < v; ++i) 
    {
        result += v;
    }
    return result;
}

int main()
{
    for (auto i = 0; i < 10; ++i)
    {
    std::cout << i << '\t' << square(i) << '\n';
    }
}