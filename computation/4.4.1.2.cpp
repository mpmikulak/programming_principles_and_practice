#include<iostream>

int main()
{
    int array[10] {0,1,2,3,4,5,6,7,8,9};

    for (auto i : array) std::cout << i << '\n';

    while (true){
        std::cout << "Enter a character: ";
        char s = ' ';
        std::cin >> s;

        switch (s) {
            case 'c':
            std::cout << "SEEEE\n";
            break;
            case 'b':
            std::cout << "BEEEE\n";
            break;
            case 'a':
            std::cout << "AYYYY\n";
            break;
            default:
            std::cout << "UH-OH" << '\n';
            return 0;
        }
    }
}
