#include<iostream>

int main()
{
    // int i = 'a';
    // while (i <= 122) 
    // {
    //     std::cout << char(i) << '\n';
    //     ++i;
    // }

    char letter = 'A';

    for (auto i = letter; i<= int(letter) + 25; ++i) 
    {
        std::cout << char(i) << '\n';
    }

    for (auto i = 0; i <= 127; ++i) 
    {
        std::cout << i << '\t' << char(i) << '\n';
    }

    while (true) {
        std::cout << "Enter a letter: ";
        char c = ' ';
        std::cin >> c;
        if (c >= 97) 
        {
            std::cout << char((c - 32)) << '\n';
        } else {
            std::cout << char((c + 32)) << '\n';
        }        
    }

    
}