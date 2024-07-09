#pragma once

#define		N	9

class Grid
{
public:
	Grid();
	~Grid() {}

	void	printGrid();
private:
	void	fillDiagonal();
	bool	isSafe(int row, int col, int num);
	bool	solveSudoku(int row, int col);
private:
	int		grid[N][N];
};

