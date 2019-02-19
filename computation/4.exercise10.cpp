#include <iostream>
#include <vector>
#include<string>

int main()
{
    std::vector<std::string> s;
    char opp_guess = ' ';
    int i = 0;
    s.push_back("Paper");
    s.push_back("Rock");
    s.push_back("Scissors");
    s.push_back("Paper");
    s.push_back("Rock");
    s.push_back("Scissors");
    s.push_back("Paper");
    s.push_back("Rock");
    s.push_back("Scissors");

    while (true)
    {
        int opp_win = 0;
        int comp_win = 0;
        std::cout << "Want to play a game?\n";
        while (true)
        {
            std::cout << "Enter rock, paper, or scissors (r,p,s): ";
            std::cin >> opp_guess;
            switch (opp_guess) {
                case 'r':
                if (s[i] == "Paper")
                {
                    std::cout << "You chose rock, I chose paper, I win!\n";
                    ++comp_win;
                } 
                else if (s[i] == "Rock")
                {
                    std::cout << "We both chose rock, a tie.\n";
                }
                else 
                {
                    std::cout << "You chose rock, I chose scissors, you win!\n";
                    ++opp_win;
                }
                break;
                case 'p':
                if (s[i] == "Paper")
                {
                    std::cout << "We both chose paper, a tie.\n";
                } 
                else if (s[i] == "Rock")
                {
                    std::cout << "You chose paper, I chose rock, you win.\n";
                    ++opp_win;
                }
                else 
                {
                    std::cout << "You chose paper, I chose scissors, I win!\n";
                    ++comp_win;
                }
                break;
                case 's':
                if (s[i] == "Paper")
                {
                    std::cout << "You chose scissors, I chose paper, you win!\n";
                    ++opp_win;
                } 
                else if (s[i] == "Rock")
                {
                    std::cout << "You chose scissors, I chose rock, I win!\n";
                    ++comp_win;
                }
                else 
                {
                    std::cout << "We both chose scissors, a tie.\n";
                }
                break;
            }
            std::cout << "You have " << opp_win << " wins.\n";
            std::cout << "I have " << comp_win << " wins.\n";
            if (opp_win > 2)
            {
                std::cout << "You win!!\n";
                break;
            }else if (comp_win > 2)
            {
                std::cout << "I win!!\n";
                break;
            }
            ++i;
        }
    }
}
