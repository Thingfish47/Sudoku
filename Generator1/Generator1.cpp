// Generator1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include "Grid.h"

using namespace std;

int main()
{
    srand(time(0));
    Grid geid = Grid();
    geid.printGrid();
    //Grid* grid = new Grid();
    //grid->printGrid();
    //delete grid;
}


