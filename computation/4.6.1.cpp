#include <iostream>
#include <vector>

int main() 
{
  // Vectors initialized with values
  std::vector<int> iv = {0,1,2,3,4,5,6,7,8,9};
  std::vector<std::string> sv = {"ham", "turkey", "buffalo", "beef"};

  // Vectors initialized with size only
  std::vector<int> vi(6);
  std::vector<std::string> vs(4);

  for (auto i = 0; i<vs.size();++i)
  {
    std::cout << vs[i] << '\n';
  }

  for (auto i : vi)
  {
    std::cout << i << '\n';
  }

  std::cout << "Hello World!\n";
}
#include <vector>
#include <iostream>

void print_vector(std::vector<double> v)
{
  for (auto x : v)
  {
    std::cout << x << '\n';
  }
}
