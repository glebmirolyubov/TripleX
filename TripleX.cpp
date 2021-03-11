#include <iostream>

void PlayGame()
{
    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl << std::endl;

    const int CodeA = 2;
    const int CodeB = 3;
    const int CodeC = 4;

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
        std::cout << "You've breaken into the system! Victory!" << std::endl << std::endl;
    } 
    else 
    {
        std::cout << "You've entered an incorrect code! Game Over!" << std::endl << std::endl;
    }
}

int main ()
{
    PlayGame();

    return 0;
}