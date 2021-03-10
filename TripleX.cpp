#include <iostream>

class GameText 
{
    public: static void printStartMessages()
    {    
        std::cout << std::endl;
        std::cout << "You are a secret agent breaking into a secure server room";
        std::cout << std::endl;
        std::cout << "You need to enter the correct codes to continue...";
        std::cout << std::endl << std::endl;
    }

    public: static void printVariablesProduct()
    {
        int a = 4;
        int b = 5;
        int c = 6;

        int product = a * b * c;

        std::cout << product;
        std::cout << std::endl;
    }
};

int main ()
{
    GameText g;

    g.printStartMessages();
    g.printVariablesProduct();

    return 0;
}