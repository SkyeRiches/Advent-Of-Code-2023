#include "Day1.h"

int main() 
{
	// create new instance of day one class
	DayOne* dayOne = new DayOne();

	dayOne->Initialise();

	// output the total value
	std::cout << dayOne->IterateThroughFile() << std::endl;

	return 0;
}