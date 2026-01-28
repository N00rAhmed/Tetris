// tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
#include <string>
#include <windows.h>
#include <conio.h>
#include <thread>
//#include <ctime>
//#include <chrono>


    // make a grid - DONE
    // make square bracket blocks controls(up down left right) in grid - IN PROGRESS
    // animate blocks moving from up to down in grid - (for now id say move on to more important things because youve gotten animation to work)
    // after one block placed generate new block coming from top - DONE
    // make blocks stack and place in a row inside grid - IN PROGRESS
    // if row full of blocks then remove them - IN PROGRESS


using namespace std;

string player;


//string grid[4][3] = {
//{".", ".", "."},
//{".", ".", "."},
//{".", ".", "."},
//{".", ".", "."}
//};

string grid[4][3];

//void display_grid(string _grid[4][3], int r, int c) {

void display_grid(string _grid[4][3]) {

    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            grid[row][column] = ".";
        }
    }

    //grid[r][c] = "[]";
    grid[0][1] = "[]";

    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            //grid[0][1] = "[]";
            cout << "\t" << grid[row][column];
        }
        cout << "\n" << "\n";
    }

};



int main()
{

    string key;
    
    int row = 0;
    int column = 1;
    
    //grid[row][column] = "[]";
    //grid[row][column];

    for (int ro = 0; ro < 4; ro++) {

        system("CLS");
        
        //display_grid(grid, ro, column);
        display_grid(grid);

        std::this_thread::sleep_for(1000ms);
        
        grid[ro + 1][column];
        //grid[0 + 1][1];

    }

    while (true) {

        key = _getch();

        if (key == "s") {
            if (row + 1 < 4) {
                swap(grid[row][column], grid[row + 1][column]);
                row++;
            }
            if (row == 3) {
                row = 0;
                column = 1;
                grid[row][column] = "[]";
            }
        }
        if (key == "d") {

            if (row == 3) {
                grid[row][column];
            }

            else if (column + 1 < 3) { // stops character from going outside grid
                swap(grid[row][column], grid[row][column + 1]);
                column++;
            }
        }
        if (key == "a") {
            if (row == 3) {
                grid[row][column];
            }

            else if (column - 1 >= 0) {
                swap(grid[row][column], grid[row][column - 1]);
                column--;
            }
        }

        int ro = 0;
        int col = 0;

        if (grid[ro + 3][col + 0] == "[]" and grid[ro + 3][col + 1] == "[]" and grid[ro + 3][col + 2] == "[]") {

            grid[ro + 3][col + 0] = "-";
            grid[ro + 3][col + 1] = "-";
            grid[ro + 3][col + 2] = "-";
        }

        if (key == "q") {
            return 0;
        }

        system("CLS");
        //display_grid(grid);
        //display_grid(grid, ro, column);
        display_grid(grid);
    }

};


