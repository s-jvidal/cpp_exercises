#include <iostream>
#include <random>
#include <limits>



int get_number()
{
	while (true) // loop until user enters valid input
	{
		int guess{};
        std::cout<<"Guess a number betweem 1 and 100:\n";
		std::cin >> guess;

		if (std::cin.fail()) // did the extraction fail?
		{
			// yep, so let's handle the failure
			std::cin.clear(); // put us back in 'normal' operation mode
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove the bad input
			continue; // and try again
		}

		// If the guess was out of bounds
		if (guess < 1 || guess > 100)
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove the bad input
			continue; // and try again
		}

		// We may have gotten a partial extraction (e.g. user entered '43x')
		// We'll remove any extraneous input before we proceed
		// so the next extraction doesn't fail
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return guess;
	}
}

int playgame(int count, int r_number)
{
	int guess{};
	std::cout<<"Guess #"<< count << "\n";
	guess = get_number();
	if(guess > r_number)
	{
		std::cout<<"lower\n";
	}
	else if(guess<r_number)
	{
		std::cout<<"higher\n";
	}
	return guess;
}


int main()
{
    std::random_device rd;
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
    std::mt19937 mt{ss};
    std::uniform_int_distribution die{ 1, 100 };


    int r_number = die(mt);
    int user_guess{};
	int count{};
    char go_on{};

	while(true)
	{
		for(int i=0;i<7;++i)
		{
			++count;
			user_guess = playgame(count,r_number);
			if(r_number == user_guess)
			{
				std::cout<<"success!\n";
				break;
			}
			if(i == 6)
			{
				std::cout<<"failure\n";
				break;
			}
		}
		std::cout<<"Continue?(y/n)\n";
		std::cin>>go_on;
		switch (go_on)
		{
			case 'y':
				count = 0;
				break;
			case 'n':
				return 0;
			default:
				break;
		}
	}	
    return 0;
}