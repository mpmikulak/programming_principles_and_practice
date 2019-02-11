#include <iostream>
#include <vector>
#include <algorithm>

double calculate_mean(std::vector<double> v)
{
  double total = 0;
  for (auto n : v)
  {
    total += n;
  }
  return total / v.size();
}

int main()
{
  std::vector<double> temps;

  for (double temp; std::cin >> temp;)
  {
    temps.push_back(temp);
  } 

  std::cout << "Average tempurature: " << calculate_mean(temps) << '\n';
  std::sort(temps.begin(), temps.end());
  std::cout << "Mean temp: " << temps[temps.size()/2] << '\n';

  std::cout << "\nend\n";
}
