#include <stdlib.h>
#include <iostream>
#include <time.h>

int main()
{
	std::cout << "Number Guessing Game" << std::endl;

	std::cout << "Generating a random number between 1 and 100" << std::endl;
	srand(time(NULL));
	int random = rand() % 100 + 1;
	
	std::cout << "Please guess the number: ";
	int guess;
	std::cin >> guess;

	std::cout << "Your guess is: " << guess << std::endl;

	if (guess == random)
	{
		std::cout << "Congratulations! You guessed the number!" << std::endl;
	}
	else
	{
		std::cout << "Sorry, the number was: " << random << std::endl;
	}

	return 0;
}
