#include <iostream>
#include <vector>
#include<string>

int main()
{
    int square = 1;
    int grains = 1;
    int forthousand = 0;
    int formillion = 0;
    int forbillion = 0;

    for (;square<65;++square)
    {
        grains = 2 * grains;
        std::cout << square << ". Grains this square: " << grains << '\n';
        if (grains > 1000000000)
        {
            forbillion = square;
            break;
        } 
        else if (grains > 1000000)
        {
            formillion = square;
        }
        else if (grains > 1000)
        {
            forthousand = square;
        }
    }
    std::cout << forthousand << '\n';
    std::cout << formillion << '\n';
    std::cout << forbillion << '\n';
}
