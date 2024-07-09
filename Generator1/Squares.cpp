#include "Squares.h"
#include <xmemory>

using namespace std;

#pragma	region	Class Square Definition

Square::Square()
{
	Random();
}


void Square::Random()
{
	bool		Used[9];
	uint8_t		nums[9];
	uint8_t		Picked;

	for (int i = 0; i < 9; i++)
	{
		nums[i] = 0;
		Used[i] = false;
	}
	Picked = 0;
	std::random_device seed;
	std::mt19937 gen{ seed() }; // seed the generator
	std::uniform_int_distribution<> dist{ 1, 9 }; // set min and max
	while (Picked < 9)
	{
		uint8_t guess = (uint8_t) dist(gen); // generate number
		if (!Used[guess - 1])
		{
			Used[guess - 1] = true;
			nums[Picked++] = guess;
		}
	}
	//for (int i = 0; i < 9; i++)
	//	cout << (int) nums[i] << " ";
	//cout << endl;
	for (int i = 0; i < 9; i++)
		Numbers[i] = nums[i];
	//Numbers[4] = Center;
	//for (int i = 5; i < 9; i++)
	//	Numbers[i] = (int) nums[i];
	//display1();
}

void Square::display1()
{
	for (int i = 0; i < 9; i++)
		cout << (int) Numbers[i] << " ";
	cout << endl;
}

void Square::display2()
{
	for (int i = 0; i < 9; i++)
	{
		cout << (int)Numbers[i] << " ";
		if (i == 2 || i == 5)
			cout << endl;
	}
	cout << endl;
	cout << endl;
}

void Square::Row(int Line)
{
	for (int i = 0; i < 3; i++)
	{
		cout << (int)Numbers[i + (Line * 3)] << " ";
	}
	cout << " ";
}
#pragma endregion

#pragma region Class LineH definition

LineH::LineH ()
{
	memset(Numbers, 0, sizeof(Numbers));
}

bool LineH::IsValid()
{
	bool valid = false;

	return valid;
}
#pragma endregion


#pragma region Class LineV definition

LineV::LineV ()
{
	memset(Numbers, 0, sizeof(Numbers));
}

bool LineV::IsValid()
{
	bool valid = false;

	return valid;
}
#pragma endregion
