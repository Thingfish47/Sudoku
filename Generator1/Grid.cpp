#include "Grid.h"


Grid::Grid()
{
	for (int i = 0; i < 9; i++)
	{
		squares[i].reset(new Square());
		squares[i]->display2();
	}
}

void Grid::display()
{
	for (int i = 0; i < 9; i++)
		Row(i);
}

void Grid::Row(int row)
{
	int		Idx;

	if (row < 3)
		Idx = 0;
	else if (row < 6)
		Idx = 3;
	else
		Idx = 6;
	squares[Idx]->Row(row % 3);
	squares[Idx + 1]->Row(row % 3);
	squares[Idx + 2]->Row(row % 3);
	cout << endl;
	if (row == 2 || row == 5)
		cout << endl;
}

void Grid::Row1()
{
}

