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
    // make square bracket blocks controls(up down left right) in grid - DONE
    // animate blocks moving from up to down in grid - 
    // after one block placed generate new block coming from top - DONE
    // make blocks stack and place in a row inside grid - IN PROGRESS
    // if row full of blocks then remove them - IN PROGRESS


using namespace std;

string player;


// refactoring grid logic will make it easier to use animation in main()

//string grid[4][3] = {
//{".", ".", "."},
//{".", ".", "."},
//{".", ".", "."},
//{".", ".", "."}
//};

string grid[4][3];

void display_grid(string _grid[4][3], int r, int c) {

//void display_grid(string _grid[4][3]) {

    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            grid[row][column] = ".";
        }
    }

    grid[r][c] = "[]";


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

    //for (int row = 0; row < 4; row++) {
    //    for (int column = 0; column < 3; column++) {
    //        grid[row][column] = ".";
    //    }
    //}

    //int counter = 0;
    
    string key;
    
    int row = 0;
    int column = 1;
    
    
    //grid[row][column] = "[]";

    //display_grid(grid);

    // arguments here setting the location of []
    //display_grid(grid, row, column);



    while (true) {


        // animation 
        for (int ro = 0; ro < 4; ro++) {

            system("CLS");
            display_grid(grid, ro, column);
            std::this_thread::sleep_for(1000ms);
            grid[ro + 1][column];

            // current problem could be becos theres two counters for row one is in for loop "ro" and other is var "row" or not

             // kkhbit will now contain the getch and other code can run without waiting for keypress
            if (_kbhit()) {

                key = _getch(); // i think this could be causing the problem with not being able to create falling blocks with controls

                if (key == "s") {
                    if (row + 1 < 4) {
                        swap(grid[row][column], grid[row + 1][column]);
                        row++;
                    }

                    if (row == 3) {
                        cout << "row index: " << row << "\n" << "column index: " << column;
                        row = 0;
                        column = 1;
                        grid[row][column] = "[]"; // brings [] to the top
                    }
                }

                if (key == "d") {
                    if (column + 1 < 3) { // stops character from going outside grid
                        swap(grid[row][column], grid[row][column + 1]);
                        column++;
                        break;  // whats making break [] go to the top of grid?
                    }
                }

                if (key == "a") {
                    if (column - 1 >= 0) {
                        swap(grid[row][column], grid[row][column - 1]);
                        column--;
                        break;

                    }
                }

                if (key == "q") {
                    return 0;
                }

            }
            //}

            //system("CLS");
            //display_grid(grid);

            //display_grid(grid, row, column);

            //display_grid(grid);
        }
    }

};


