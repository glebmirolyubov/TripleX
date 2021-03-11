#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " security room...\nYou need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add-up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl << std::endl;

    int GuessA, GuessB, GuessC;

    // Store player guess
    std::cout << "Enter your guess: ";
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << std::endl << "You entered: " << GuessA << GuessB << GuessC << std::endl << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You've breaken into the system level! Great!" << std::endl << std::endl;
        return true;
    } 
    else 
    {
        std::cout << "You've entered an incorrect code! Try again!" << std::endl << std::endl;
        return false;
    }
}

int main ()
{
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);

        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    std::cout << "\n***Congratulations, you've hacked into the system and completed the game***\n\n";

    return 0;
}