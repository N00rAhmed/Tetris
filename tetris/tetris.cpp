// tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
#include <string>
#include <windows.h>
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
    // actually instead of having a number grid make it a string grid to make life easier with displaying string vlaues becaise
    // thats what im using
    string key;
    int row; 
    int column;  


    string player;


    string grid[4][3] = {
    {".", ".", "."},
    {".", ".", "."},
    {".", "[]", "."},
    {".", ".", "."}
    };

    //cout << grid;


    //string key_press;
    //int a = 20;
    //std::string s = std::to_string(a);
    // or: auto s = std::to_string(a);
    
    key = _getch();

    for (row = 0; row < 4; row++) {
        for (column = 0; column < 3; column++) {
            //player = "[]";
            //grid[2][1] = player;
            if (grid[row][column] == "[]") {
                if (key == "w") {
                    std::swap(grid[row][column], grid[row - 1][column]);
                }
            }
            //string b = player(grid[1][1]);
            cout << "\t" << grid[row][column];

        }
        cout << "\n" << "\n";

    }


    // make a function outside main function print the grid and reuse it that would solve rendering with keypress problem
    
    // ASCII code for 'w' is 0x77 and the ASCII code for 'W' is 0x57
    //while (true) {
    //    if (GetAsyncKeyState(0x57)) {
    //        //cout << "KEY PRESSED";
    //        //break;
    //    }
    //}
    // 

    //while (true) {
    //    if (GetKeyState(0x57) & 0x8000) {
    //        //cout << "KEY PRESSED";
    //        for (row = 0; row < 4; row++) {
    //            for (column = 0; column < 3; column++) {
    //                player = "[]";
    //                grid[2][1] = player;
    //                if (grid[row][column] == "[]") {
    //                    //grid[row][column];
    //                    //swap(grid[row][column], grid[row - 1][column]);
    //                }
    //                //string b = player(grid[1][1]);
    //                cout << "\t" << grid[row][column];

    //            }
    //            cout << "\n" << "\n";

    //        }

    //        break;
    //    }

    //}


    //_getch();
    //key = _getch();
    //if (key == "w") {
        //cout << "HELLO";
        //if (grid[row][column] == ".") {
        //    for (row = 0; row < 4; row++) {
        //        for (column = 0; column < 3; column++) {
        //            cout << "PREFERCT";
        //            //swap(grid[row][column], grid[row - 1][column]);
        //            cout << "\t" << grid[row][column];

        //        }
        //     cout << "\n" << "\n";
        //    }
        //}
        //else {
        //    cout << "INVALID";
        //}
    //}
    //else {
        //cout << "INVALID";
    //}


    //key = _getch();
    //if (key == "w") {
        //if (grid[row][column] == ".") {
        //    for (row = 0; row < 4; row++) {
        //        for (column = 0; column < 3; column++) {
        //            cout << "PREFERCT";
        //            //swap(grid[row][column], grid[row - 1][column]);
        //            cout << "\t" << grid[row][column];

        //        }
        //     cout << "\n" << "\n";
        //    }
        //}
        //else {
        //    cout << "INVALID";
        //}
    //}


    // _getch tracks key presses
    //key = _getch(); 

    //if (key == "w") {
        //system("cls");
        // figure out how to move player up and refresh player value on grid to new location
        
        //grid[0][1] = player;
        //player = grid[0][1];
        
        //cout << "\t" << grid[row][column];

        //for (int r = 0; r < 4; r++) {
        //    //player[r + 1];
        //    //player = r;
        //    for (int c = 0; c < 3; c++) {

        //        //player = grid[r+1][c];
        //        //cout << "\t" << player;

        //        if (grid[r][c] == "[]") {
        //            // add f strings to non working code belwo
        //            //swap(grid[r][c], grid[r - 1][c]);
        //            //grid[r][c] = grid[r - 1][c];

        //        }
        //        else {
        //            cout << "INVALID RESPONSE: ";
        //            //cout << grid[r][c];
        //        }

        //        cout << "\t" << grid[r][c];

        //    };
        //    cout << "\n" << "\n";
        //};
        //for (row = 0; row < 4; row++) {
        //    for (column = 0; column < 3; column++) {
        //        player = "[]";
        //        grid[0][1] = player;
        //        //grid[1][1] = ".";
        //        cout << "\t" << grid[row][column];
        //    }
        //    cout << "\n" << "\n";
        //}

    //}






};
