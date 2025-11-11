// tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
#include <string>
//#include <Windows.h>
#include <conio.h>

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
    
    string key;
    string player;

    //string key_press;
    //int a = 20;
    //std::string s = std::to_string(a);
    // or: auto s = std::to_string(a);

    for (row = 0; row < 4; row++) {
        for (column = 0; column < 3; column++) {
            player = "[]";
            grid[2][1] = player;
            //string b = player(grid[1][1]);

            cout << "\t" << grid[row][column];
        }
        cout << "\n" << "\n";
    }

    // _getch tracks key presses
    key = _getch(); 

    if (key == "w") {
        system("cls");
        // figure out how to move player up and refresh player value on grid to new location
        
        //grid[0][1] = player;
        //player = grid[0][1];
        
        //cout << "\t" << grid[row][column];

        for (int r = 0; r < 4; r++) {
            //player[r + 1];
            //player = r;
            for (int c = 0; c < 3; c++) {
                //player = grid[r+1][c];
                //cout << "\t" << player;
                cout << "\t" << grid[r][c];
                //cout << "\t" << player;
                //cout << player;
            };
            cout << "\n" << "\n";
        };
        //for (row = 0; row < 4; row++) {
        //    for (column = 0; column < 3; column++) {
        //        player = "[]";
        //        grid[0][1] = player;
        //        //grid[1][1] = ".";
        //        cout << "\t" << grid[row][column];
        //    }
        //    cout << "\n" << "\n";
        //}

    }






};
