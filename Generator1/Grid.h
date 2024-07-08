#pragma once

#include "Squares.h"

using namespace std;

class Grid
{
public:
	Grid();
	~Grid() {}

	void	display();
private:
	void	Row(int);
	void	Row1();
private:
	unique_ptr<Square>	squares[9];
};

