#include <iostream>

class GameText 
{
    // Prints messages at the start of the game to the console
    public: static void printStartMessages()
    {    
        std::cout << std::endl;
        std::cout << "You are a secret agent breaking into a secure server room";
        std::cout << std::endl;
        std::cout << "You need to enter the correct codes to continue...";
        std::cout << std::endl << std::endl;
    }

    // Prints the product of three variables to the console
    public: static void printVariablesProduct()
    {
        const int CodeA = 4;
        const int CodeB = 5;
        const int CodeC = 6;

        const int CodeSum = CodeA + CodeB + CodeC;
        const int CodeProduct = CodeA * CodeB * CodeC;

        std::cout << "There are 3 numbers in the code" << std::endl;
        std::cout << "The codes add-up to: " << CodeSum << std::endl;
        std::cout << "The codes multiply to give: " << CodeProduct << std::endl << std::endl;
    }

    public: static void getPlayerGuessCode()
    {
        int GuessA, GuessB, GuessC;

        std::cout << "Enter your guess: ";
        std::cin >> GuessA;
        std::cin >> GuessB;
        std::cin >> GuessC;
        std::cout << std::endl << "You entered: " << GuessA << GuessB << GuessC << std::endl << std::endl;

        int GuessSum = GuessA + GuessB + GuessC;
        int GuessProduct = GuessA * GuessB * GuessC;
    }
};

int main ()
{
    GameText g;

    g.printStartMessages();
    g.printVariablesProduct();
    g.getPlayerGuessCode();

    return 0;
}