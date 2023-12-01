#include "Day1.h"

DayOne::DayOne()
{
}

DayOne::~DayOne()
{
}

void DayOne::Initialise()
{
	input.open("input.txt");
}

int DayOne::IterateThroughFile()
{
	// for each line in the file
	std::string line;
	while (std::getline(input, line))
	{
		int length = line.length() + 1;
		char* lineAsArray = new char[length];
		strcpy_s(lineAsArray, line.size() + 1, line.c_str());

		std::list<char> listOfNumbers;

		for (int i = 0; i < length; i++)
		{
			char charToCheck = lineAsArray[i];
			if (isdigit(charToCheck))
			{
				listOfNumbers.push_back(lineAsArray[i]);
			}
		}

		std::string valueForLine = "";
		char frontChar(listOfNumbers.front());
		char endChar(listOfNumbers.back());

		valueForLine += frontChar;
		valueForLine += endChar;

		totalValue += stoi(valueForLine);
		delete[] lineAsArray;
	}

	return totalValue;
}
