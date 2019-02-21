#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> test = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    std::vector<int> primes;
    for (auto i=2;i<101;++i)
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

    std::vector<int> testee;

    for (auto x : primes)
    {
        if (x == 0) {continue;}
        else {testee.push_back(x);}
    }

    for (auto i=0;i<testee.size();++i) 
    {
        if (testee[i]==test[i]) { std::cout << i << ". yes\n";}
    }
}
