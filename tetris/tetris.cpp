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

// CHECKS KEY PRESS 
    //char key;
    //cout << "press key ";
    //while (1) {
    //    key = _getch();
    //    cout << "key pressed " << key << "\n";
    //}
    //////////////////////////////////////////////////////////////////////
    // 
    //int num = 123; string str_num = to_string(num);

    //if (GetKeyState('A') & 0x8000/*Check if high-order bit is set (1 << 15)*/)
    //{
    //    // Do stuff
    //    cout << "A WAS PRESSED";
    //    //TRACE("This is a TRACE statement\n");
    //    //printf("mdwepp");
    //    //printf("No data within five seconds.\n");
    //}


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
            player = "P";
            grid[1][1] = player;
            //string b = player(grid[1][1]);

            cout << "\t" << grid[row][column];
        }
        cout << "\n" << "\n";
    }

    // _getch tracks key presses
    key = _getch(); 

    if (key == "w") {
        
        //grid[0][1] = player;
        //player = grid[0][1];
        
        //cout << "\t" << grid[row][column];


        for (row = 0; row < 4; row++) {
            for (column = 0; column < 3; column++) {
                player = "P";
                grid[0][1] = player;
                grid[1][1] = ".";
                cout << "\t" << grid[row][column];
            }
            cout << "\n" << "\n";
        }

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
