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

double calculate_median(std::vector<double> v)
{
  std::sort(v.begin(),v.end());
  
  double median = 0;
  int middle = v.size() / 2;
  
  if (v.size() % 2 == 0)
  {
    median = (v[middle] + v[--middle])/2;
  }
  else
  {
    return v[middle];  
  }
  return median;
}

int main()
{
  std::vector<double> temps = {23.57, 24.65, 74.165, 682.65, 73.66, 509.36, 324.76, 234.56};

  // for (double temp; std::cin >> temp;)
  // {
  //   temps.push_back(temp);
  // } 
  std::sort(temps.begin(), temps.end());
  for (auto t : temps) std::cout << t << " ";
  std::cout << '\n';
  std::cout << "Average temperature: " << calculate_mean(temps) << '\n';
  std::cout << "Median temperature: " << calculate_median(temps) << '\n';
}
