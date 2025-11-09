// tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
#include <string>

using namespace std;

int main()
{
    // make a grid
    // make square bracket blocks controls(up down left right) in grid
    // animate blocks moving from up to down in grid
    // after one block placed generate new block coming from top
    // make blocks stack and place in a row inside grid
    // if row full of blocks then remove them

    // grid could possibly be  |_| or .
    // use 2 dimensional arrays for making grid

    int num = 123; string str_num = to_string(num);


    // 2d array [4] rows and [3] columns
    //int grid[4][3] = {
    //    {1, 2, 3},
    //    {4, 5, 6},
    //    {7, 8, 9},
    //    {10, 11, 12}
    //};
    // actually instead of having a number grid make it a string grid to make life easier with displaying string vlaues becaise
    // thats what im using
    string grid[4][3] = {
    {".", ".", "."},
    {".", ".", "."},
    {".", ".", "."},
    {".", ".", "."}
    };


    int row;
    int column;
    string player = "P";

    //int a = 20;
    //std::string s = std::to_string(a);
    // or: auto s = std::to_string(a);

    for (row = 0; row < 4; row++) {
        for (column = 0; column < 3; column++) {
            
            // grid cant acccept data types which arent int
            //string player = "P";
            //grid[1][1] = 3;
            //to_string(grid[1][1]) = "p";
            //string a = to_string(grid[1][1]) = "P";

            //string str_row = to_string(row);
            //string str_col = to_string(column);
            
            //string f = to_string(grid[4][3]);
            grid[1][1] = player;

            
            //cout << "\t" << a;
            cout << "\t" << grid[row][column];

            //cout << "\t" << to_string(grid[row][column]);
        }
        cout << "\n" << "\n";
    }

    // display a player in the grid
    //string player = "P";

    //grid[1][2] = 3;
    //cout << grid[1][2];
    // 
    // 
    //*player = ' '; player -= 5; *player = 'P'; system("cls"); for (int y = 0; y < 4; y++) { cout << grid[y] << "\n"; };
    //cout << grid[*player];




}
