#include<iostream>

using namespace std;

int main()
{
    string first_name;
    string friend_name;
    char friend_sex {0};
    int age;

    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ",\n";
    std::cout << "\tHow are you? I am fine. I miss you.\n";
    std::cout << "Whatever, blah blah, hipitty.\n";

    std::cout << "Name another friend: ";
    std::cin >> friend_name;

    std::cout << "Have you seen " << friend_name << " lately?\n";
    std::cout << "Enter m if " << friend_name << " is a boy or f if "
        << friend_name << " is a girl ";
    std::cin >> friend_sex;

    if (friend_sex == 'm')
        std::cout << "If you see " << friend_name
        << " please ask him to call me.\n";
    else if (friend_sex == 'f')
        std::cout << "If you see " << friend_name
        << " please ask her to call me.\n";

    std::cout << "Enter the age of the recipient ";
    std::cin >> age;

    std::cout << "I hear you just had a birthday and you are " << age
    << " years old. ";
    if (age < 12) std::cout << "Next year you will be " << age+1 << ".\n";
    else if (age == 17) std::cout << "Next year you will be able to vote.\n";
    else if (age > 70) std::cout << "I hope you are enjoying retirement.\n";

    std::cout << "Yours sincerely,\n \nMike Mikulak\n";
}
