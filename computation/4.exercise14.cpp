#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::cout << "Enter the max number: ";
    int max = 0;
    std::cin >> max;
    std::vector<int> primes;
    for (auto i=2;i<max+1;++i)
    {
        primes.push_back(i);
    }
    
    for (auto p=2;p<primes.size();++p)
    {
        for (auto x=0;x<primes.size();++x) 
        {
            if (primes[x] == p) { continue; }
            else if (primes[x]%p == 0) 
            { 
                primes[x] = 0;
            }
        }
    }

    for (auto x : primes)
    {
        if (x == 0) {continue;}
        else {std::cout << x << '\n';}
    }
}
