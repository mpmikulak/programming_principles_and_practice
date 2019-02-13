#include <iostream>
#include <vector>
#include <algorithm>

// 234.56 324.76 509.36 682.65 123.45 54.321 23.57 24.65 73.66 74.165

int main()
{
  double mean_distance = 0;
  double c = 0;
  std::vector<double> v;

  while (std::cin >> c)
  {    
    v.push_back(c);
  }

  double smallest_distance = v[0];
  double greatest_distance = v[0];
  double total_distance = 0;
  for (auto i = 0; i < v.size(); ++i)
  {
    if (i > 0)
    {
      double distance = v[i] - v[i-1];
      if (distance < 0)
      {
        distance *= -1;
      }
      if (distance > greatest_distance)
      {
        greatest_distance = distance;

      } else if (distance < smallest_distance)
      {
        smallest_distance = distance;
      }
      total_distance += distance;
    }
    mean_distance = total_distance / (v.size() - 1);
  }
  std::cout << "greatest_distance: " << greatest_distance << '\n';
  std::cout << "smallest_distance: "<< smallest_distance << '\n';
  std::cout << "total_distance: "<< total_distance << '\n';
  std::cout << "mean_distance: "<< mean_distance << '\n';
}
