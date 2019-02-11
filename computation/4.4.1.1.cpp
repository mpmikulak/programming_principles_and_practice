#include<iostream>

int main()
{
    double yen_to_dollar = 0.0091;
    double euro_to_dollar = 1.13;
    double pound_to_dollar = 1.3;

    char unit = ' ';
    double value = 0.0;

        std::cout << "Enter a value followed by y, e, or p: ";
        std::cin >> value >> unit;

        double result = 0.0;
        if (unit == 'y')
            std::cout << value << " yen to dollars: "
            << yen_to_dollar * value << "\n";
        else if (unit == 'e')
            std::cout << value << " euro to dollars: "
            << euro_to_dollar * value << "\n";
        else if (unit == 'p')
            std::cout << value << " pounds to dollars: "
            << pound_to_dollar * value << "\n";
}
