#include <iostream>
#include <vector>

int main()
{
  double x = 0;
  double y = 0;
  char o = ' ';

  for (auto i = 0; i < 5; ++i)
  {
    std::cout << "Enter two values followed by an operation (+/-/*//):";
    std::cin >> x >> y >> o;

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
