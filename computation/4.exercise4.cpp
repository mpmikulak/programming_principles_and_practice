#include <iostream>
#include <vector>

int main()
{
  char answer = ' ';
  bool have_answer = false;
  int num = 1;
  int guess = 50;
  std::cout << "Think of a number between 1 and 100.\n";
  for (auto i = 0; i < 7;++i)
  {
    int correction = 0;
    switch (i){
    case 1:
      correction = 25;
      break;
    case 2:
      correction = 12;
      break;
    case 3:
      correction = 6;
      break;
    case 4:
      correction = 3;
      break;
    case 5:
      correction = 2;
      break;
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
        std::cout << i+2 << ". Is your number " << guess << "?\n";
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
