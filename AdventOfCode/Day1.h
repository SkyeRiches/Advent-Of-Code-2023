#ifndef DAY1_H
#define DAY1_H

#include<fstream>
#include<sstream>
#include<string>
#include<iostream>
#include<cstring>
#include<list>

class DayOne
{
	public:
		DayOne();
		~DayOne();

		int IterateThroughFile();
		void Initialise();

		int totalValue = 0;
		std::ifstream input;
};
#endif //!Day1_H