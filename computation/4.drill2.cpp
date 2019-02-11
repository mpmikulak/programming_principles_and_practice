#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<double> v;
  double one = 0;
  double two = 0;
  double largest = 0;
  double smallest = 0;
  double sum = 0;
  int numofvalues = 0;
  std::string unitone = " ";
  std::string unittwo = " ";

  std::cin >> two >> unittwo;
    if (unittwo == "cm") 
  {
    two = two * 100;
  } else if (unittwo == "in")
  {
    two = two * 2.54 * 100;
  } else if (unittwo == "ft")
  {
    two = two / 12 * 2.54 * 100;
  }
  v.push_back(two);
  sum += two;
  largest = two;
  smallest = two;
  ++numofvalues;
  while(std::cin >> one >> unitone)
  {
    if (unitone == "cm") 
    {
      one /= 100;
    } else if (unitone == "in")
    {
      one *= 2.54 / 100;
    } else if (unitone == "ft")
    {
      one = one * 12 * 2.54 / 100;
    }
    std::cout << one << " " << unitone << '\n';
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
    sum += one;
    ++numofvalues;
    v.push_back(one);
  }
  std::sort(v.begin(),v.end());
  std::cout << "Smallest value entered: " << smallest << '\n';
  std::cout << "Largest value entered: " << largest << '\n';
  std::cout << "Number of values entered: " << numofvalues << '\n';
  std::cout << "Sum of all values: " << sum << '\n';
  for (auto va : v) std::cout << va << '\n';
}
