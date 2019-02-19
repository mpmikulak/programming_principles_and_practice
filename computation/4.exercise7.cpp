#include <iostream>
#include <vector>
#include<string>

int main()
{
    double x = 0;
    double y = 0;
    std::string a = " ";
    std::string b = " ";
    char o = ' ';

    std::vector<std::string> s;
    s.push_back("zero");
    s.push_back("one");
    s.push_back("two");
    s.push_back("three");
    s.push_back("four");
    s.push_back("five");
    s.push_back("six");
    s.push_back("seven");
    s.push_back("eight");
    s.push_back("nine");

    for (auto i = 0; i < 5; ++i)
    {
        
        std::cout << "Enter two values followed by an operation (+/-/*//):";
        std::cin >> a >> b >> o;

        if (a.length() > 1)
        {
            for (auto i=0;i<s.size();++i)
            {
                if (s[i] == a)
                {
                    x = i;
                    break;
                }
            }
        } else
        {
            x = std::stoi(a);
        }
        
        if (b.length() > 1)
        {
            for (auto i=0;i<s.size();++i)
            {
                if (s[i] == b)
                {
                    y = i;
                    break;
                }
            }
        } else
        {
            y = std::stoi(b);
        }
        
        switch (o){
            case '+':
            std::cout << "The sum of " << x << " and " << y << " is " << x+y << '\n';
            break;
            case '-':
            std::cout << "The difference of " << x << " and " << y << " is " << x-y << '\n';
            break;
            case '*':
            std::cout << "The product of " << x << " and " << y << " is " << x*y << '\n';
            break;
            case '/':
            std::cout << "The quotient of " << x << " and " << y << " is " << x/y << '\n';
            break;
            default:
            std::cout << "Please enter a valid operation.\n";
        }
    }
}
