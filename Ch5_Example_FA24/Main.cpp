#include <stdlib.h>
#include <iostream>
#include <time.h>

int main()
{
	std::cout << "Number Guessing Game" << std::endl;

	std::cout << "Generating a random number between 1 and 100" << std::endl;
	srand(time(NULL));
	int random = rand() % 100 + 1;
	
	std::cout << "You have three guesses. Please enter your first guess of the number: ";
	int guess;
	std::cin >> guess;

	std::cout << "Your guess is: " << guess << std::endl;

	if (random == guess)
	{
		std::cout << "Congratulations! You guessed the number!" << std::endl;
	}
	else
	{
		std::cout << "Sorry, your first guess was incorrect. Please guess again."<< std::endl;


	}

	return 0;
}
