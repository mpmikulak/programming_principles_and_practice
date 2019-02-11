#include <iostream>
#include <vector>

int main()
{
  double one = 0;
  double two = 0;
  double largest = 0;
  double smallest = 0;

  std::cin >> two;
  largest = two;
  smallest = two;
  while(std::cin >> one)
  {
    if (one == two) std::cout << "The numbers are equal\n";
    else if (one < two) 
    {
      std::cout << "The smaller value is: " << one << '\n';
      std::cout << "The larger value is: " << two << '\n';
      if ((two-one) < 1.0) std::cout << "The numbers are almost equal\n";
    }
    else
    { 
      std::cout << "The smaller value is: " << two << '\n';
      std::cout << "The larger value is: " << one << '\n';
      if ((one-two) < 1.0) std::cout << "The numbers are almost equal\n";
    }

    if (one > largest)
    {
      largest = one;
      std::cout << "The largest so far.\n";
    } else if (one < smallest)
    {
      smallest = one;
      std::cout << "The smallest so far.\n";
    }
    two = one;
  }
}
