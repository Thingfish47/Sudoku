#pragma once

#include <cstdint>
#include <random>
#include <iostream>

class Square
{
public:
	Square();
	~Square() {}
	void display2();
	void Row (int i);

private:	//	Functions
	void Random();
	void display1();
private:	//	Data
	uint8_t		Numbers[9];
};

