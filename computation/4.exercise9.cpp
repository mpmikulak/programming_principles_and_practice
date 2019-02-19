#include <iostream>
#include <vector>
#include<string>

int main()
{
    int square = 1;
    int intgrains = 1;
    double dbgrains = 1;
    long lgrains = 1;
    int forthousand = 0;
    int formillion = 0;
    int forbillion = 0;

    for (;square<65;++square)
    {
        intgrains = 2 * intgrains;
        dbgrains = 2 * dbgrains;
        lgrains = 2 * lgrains;
        std::cout << square << ". Grains in int: " << intgrains << '\n';
        std::cout << ". Grains in double: " << dbgrains << '\n';
        std::cout << ". Grains in long: " << lgrains << '\n';
    }
}
