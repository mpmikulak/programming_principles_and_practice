#include <iostream>
#include <vector>
#include <algorithm>

bool isBad(std::string s) 
{
  std::vector<std::string> words = {"broccoli"};
  for (auto w : words) if (s == w) return true; else return false;
}

int main()
{
  
  // for (std::string temp; std::cin >> temp;)
  // {
  //   words.push_back(temp);
  // }
  // std::sort(words.begin(), words.end());

  for (std::string temp; std::cin >> temp;)
  {
    if (isBad(temp)) std::cout << "BLEEP" << '\n';
    else std::cout << temp << '\n';
  }

  // for (auto i = 0; i < words.size(); ++i)
  // {
  //   if (i > 0)
  //   {
  //     if (words[i] != words[i-1]) std::cout << words[i-1] << '\n';
  //   }
  // }
}
