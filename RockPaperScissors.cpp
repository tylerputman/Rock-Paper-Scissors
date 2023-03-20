

#include <iostream>
#include <cstdlib>
#include <ctime>

//-----Prototypes----//
void ComputerGame();
//------------------//

int main()
{
    int repeatGame;
    
    std::cout << "|-----------------------------------|" << std::endl;
    std::cout << "      ROCK/PAPER/SCISSORS GAME       " << std::endl;
    std::cout << "|-----------------------------------|" << std::endl;
    std::cout << "\n";
    
    do
    {
        ComputerGame();
        std::cout << "\n";
        
        std::cout << "Would you like to play again? 1 = Yes, 2 = No: ";
        std::cin >> repeatGame;
        std::cout << "\n";
    
    }while(repeatGame == 1);

}

void ComputerGame()
{
    srand(time(0));
    
    int choice;
    
    std::cout << "Please select an option." << std::endl;
    std::cout << "\n";
    
    std::cout << "1. Rock" << std::endl;
    std::cout << "2. Paper" << std::endl;
    std::cout << "3. Scissors" << std::endl;
    std::cout << "\n";
    
    std::cout << "Option: ";
    std::cin >> choice;
    std::cout << "\n";

	int computerChoice = rand() % 3+1;

    if(choice == 1 && computerChoice == 2)
    {
        std::cout << "Paper covers rock! Computer wins." << std::endl;
        std::cout << "\n";
    }
    
    else if(choice == 2 && computerChoice == 1)
    {
        std::cout << "Paper covers rock! You win!" << std::endl;
        std::cout << "\n";
    }
    
    else if(choice == 2 && computerChoice == 3)
    {
        std::cout << "Scissors cuts paper! Computer wins." << std::endl;
        std::cout << "\n";
    }
    
    else if(choice == 3 && computerChoice == 2)
    {
        std::cout << "Scissors cuts paper! You win!" << std::endl;
        std::cout << "\n";
    }
    
    else if(computerChoice == 1 && choice == 3)
    {
        std::cout << "Rock crushes scissors! Computer wins." << std::endl;
        std::cout << "\n";
    }
    
    else if(computerChoice == 3 && choice == 1)
    {
        std::cout << "Rock crushes scissors! You win!" << std::endl;
        std::cout << "\n";
    }

    else if(computerChoice == 1 && choice == 1)
    {
        std::cout << "You both chose the same, it's a tie! Play again :)" << std::endl;
        std::cout << "\n";
        ComputerGame();
    }
    
    else if(computerChoice == 2 && choice == 2)
    {
        std::cout << "You both chose the same, it's a tie! Play again :)" << std::endl;
        std::cout << "\n";
        ComputerGame();
    }
    
    else if(computerChoice == 3 && choice == 3)
    {
        std::cout << "You both chose the same, it's a tie! Play again :)" << std::endl;
        std::cout << "\n";
        ComputerGame();
    }
    else
    {
        std::cout << "Not a valid option. Please select again." << std::endl;
        std::cout << "\n";
        ComputerGame();
    }
}