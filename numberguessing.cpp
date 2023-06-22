#include <iostream>
#include <ctime>

int main()
{
    int num;
    int guess;
    int guesses;
    bool playagain = true;
    std::string response;

    while (playagain)
    {
        srand(time(0));
        num = (rand() % 100) + 1;
        guess = 0;
        guesses = 0;
        while (guess != num)
        {
            std::cout << "Guess number between 1 - 100: \n";
            std::cin >> guess;
            if (guess > num)
            {
                std::cout << "Your number is too high!\n";
            }
            else if (guess < num)
            {
                std::cout << "Your number is too low!\n";
            }
            guesses ++;
        }
        std::cout << "--------------\n";
        std::cout << "YOU WON!!\n";     
        std::cout << "Guesses: " << guesses << "\n";
        std::cout << "---------------\n";
        std::cout << "Do you wanna play it again? (Y/N)\n";
        std::cin >> response;
        if (response == "Y" || response == "y")
        {
            playagain = true;
        }
        else if (response == "N" || response == "n")
        {
            playagain = false;
        }
        playagain = false;
        std::cout << "Thanks for playing!";       
    }
    return 0;
}