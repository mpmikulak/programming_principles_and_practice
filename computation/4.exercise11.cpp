#include <iostream>
#include <vector>
#include <string>

bool is_prime(int j)
{
    if (j==0) { return false; }
    for (auto i=2;i<j;++i)
    {
        if (j%i==0)
        {
            return false;
        }
    }    
    return true;
}

int main()
{
    std::vector<int> primes;
    primes.push_back(2);
    for (auto i=0;i<100;++i)
    {
        if (is_prime(i))
        {
            std::cout << i << '\n';
            primes.push_back(i);
        }
    }
}
