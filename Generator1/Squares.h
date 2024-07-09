#pragma once

#include <cstdint>
#include <random>
#include <iostream>

#pragma	region	Class Square Definition

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

#pragma endregion

#pragma region Class LineH definition

class LineH
{
public:
	LineH();
	~LineH() {}

	bool IsValid();

private:
	uint8_t	Numbers[9];

};

#pragma endregion

#pragma region Class LineV definition

class LineV
{
public:
	LineV();
	~LineV() {}

	bool IsValid();

private:
	uint8_t	Numbers[9];

};

#pragma endregion

