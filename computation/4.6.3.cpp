#include <vector>
#include <iostream>

void print_vector(std::vector<double> v)
{
  std::cout << "The size is " << v.size() << " items: ";
  for (auto x : v)
  {
    std::cout  << x << " ";
  }
  std::cout << '\n';
}

int main()
{
  std::vector<double> intvec;
  print_vector(intvec);

  intvec.push_back(2.7);
  print_vector(intvec);

  intvec.push_back(5.6);
  print_vector(intvec);

  intvec.push_back(7.9);
  print_vector(intvec);

  std::cout << "End\n";
}
