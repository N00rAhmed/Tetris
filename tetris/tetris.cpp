// tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
#include <string>
#include <windows.h>
#include <conio.h>


    // make a grid
    // make square bracket blocks controls(up down left right) in grid
    // animate blocks moving from up to down in grid
    // after one block placed generate new block coming from top
    // make blocks stack and place in a row inside grid
    // if row full of blocks then remove them

using namespace std;

string player;


string grid[4][3] = {
{".", ".", "."},
{".", ".", "."},
{".", "[]", "."},
{".", ".", "."}
};


void display_grid(string _grid[4][3]);

int main()
{


    string key;
    int row = 2;
    int column = 1;

    display_grid(grid);

    //for (int row = 0; row < 4; row++) {
        //for (int column = 0; column < 3; column++) {

    // make it go up until top
            
    // make sure player isnt duplicated when moved(duplicated because of hardcoded value needs to be removed when keypressed)

    while (true) {
        key = _getch();

        //if (grid[row][column] == player) {

        if (key == "w") {
            if (row - 1 >= 0) { // stops character from going outside grid
                swap(grid[row][column], grid[row - 1][column]);
                row--;

            }
        }
        if (key == "s") {
            if (row + 1 < 4) {
                swap(grid[row][column], grid[row + 1][column]);
                row++;

            }
        }
        if (key == "d") {
            if (column + 1 < 3) { // stops character from going outside grid
                swap(grid[row][column], grid[row][column + 1]);
                column++;

            }
        }
        if (key == "a") {
            if (column - 1 >= 0) {
                swap(grid[row][column], grid[row][column - 1]);
                column--;

            }
        }
        system("CLS");
        display_grid(grid);

        
    }

                //if (row - 1 >= 0)
                //{
                //    std::swap(grid[row][column], grid[row - 1][column]);
                //    row--;
                //}

                //else {
                //    cout << "EXIT";
                //    return(0);
                //}
        //}

    //}
    //std::cout << std::endl;
    //system("PAUSE");
    //return 0;

};



void display_grid(string _grid[4][3]) {
    for ( int row = 0; row < 4; row++) {
        for ( int column = 0; column < 3; column++) {
            //player = "[]";
            //grid[2][1] = player;
            cout << "\t" << grid[row][column];
        }
        cout << "\n" << "\n";
    }
}
