#include<iostream>
#include<vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9};

    for (auto i : v){
        std::cout << i << '\n';
    }

    std::vector<int> vi(6);
}