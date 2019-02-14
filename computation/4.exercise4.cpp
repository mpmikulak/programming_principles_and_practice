#include <iostream>
#include <vector>

int main()
{
  char answer = ' ';
  bool have_answer = false;
  int num = 1;
  int guess = 50;
  int correction = 25;
  std::cout << "Think of a number between 1 and 100.\n";
  for (auto i = 0; i < 7;++i)
  {
    if (i>1)
    {
      correction /= 2;
    }
    if (answer == 'y')
    {
      guess -= correction;
    }
    else if (answer == 'n')
    {
      guess += correction;
    }
    std::cout << i+1 << ". Is your number less than " << guess << " (y/n)?\n";
    std::cin >> answer;
    if (i == 5)
    {
      if (answer == 'y')
      {
        std::cout << i+2 << ". Is your number " << --guess << "?\n";
        std::cin >> answer;
        if (answer == 'y')
        {
          break;
        }
      }
      else 
      {
        std::cout << i+2 << ". Is your number " << ++guess << "?\n";
        std::cin >> answer;
        if (answer == 'y')
        {          
          break;
        }
      }
    }
  }
  std::cout << "I WIN!!\n";
}
