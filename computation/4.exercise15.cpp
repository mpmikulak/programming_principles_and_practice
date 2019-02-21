#include <iostream>
#include <vector>
#include <string>

bool is_prime(int j)
{
    if (j == 2) { return true;}
    else 
    {
        for (auto i=2;i<j;++i)
        {
            if (j%i == 0) { return false; }
        }
    }
    return true;
}

int main()
{
    std::cout << "Enter the number of primes: ";
    int max = 0;
    std::cin >> max;
    std::vector<int> primes;

    int pos = 2;
    while (primes.size() < max)
    {
        if (is_prime(pos)) { primes.push_back(pos); }
        ++pos;
    }
    for (auto x=0;x<primes.size(); ++x)
    {
        std::cout << x+1 << ". " << primes[x] << '\n';
    }
}
