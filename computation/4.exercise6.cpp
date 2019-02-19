#include <iostream>
#include <vector>
#include <string>

int main()
{
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

    std::string reply = " ";
    while(true)
    {
        std::cout << "Enter a string: ";
        std::cin >> reply;
        if (reply.size() <= 1) 
        {
            int num = std::stoi(reply);
            std::cout << s[num] << '\n';
        } else 
        {
            for (auto i =0; i<s.size();++i)
            {
                if (s[i] == reply)
                {
                    std::cout << i << '\n';
                    break;
                }
            }
        }
    }
}
