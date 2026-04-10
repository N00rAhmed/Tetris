// tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
#include <string>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <thread>
#include <cstdio>


    // make a grid - DONE
    // make square bracket blocks controls(up down left right) in grid - DONE
    // animate blocks moving from up to down in grid - DONE
    // after one block placed generate new block coming from top - DONE
    // make blocks stack and place in a row inside grid - 
    // if row full of blocks then remove them - DONE


using namespace std;

string player;


//string grid[4][3] = {
//{".", ".", "."},
//{".", ".", "."},
//{".", ".", "."},
//{".", ".", "."}
//};

string grid[4][3];

void display_grid(string _grid[4][3], int r, int c) {

//void display_grid(string _grid[4][3]) {

    //for (int row = 0; row < 4; row++) {
    //    for (int column = 0; column < 3; column++) {
    //        grid[row][column] = ".";
    //    }
    //}

    grid[r][c] = "[]";


    for (int row = 0; row < 4; row++) {

        //cout << "#";

        for (int column = 0; column < 3; column++) {
            //grid[0][1] = "[]";
            //cout << "#";
            cout << "\t" << grid[row][column];
        }
        cout << "\n" << "\n";
        //cout << "\t" << "\t";

    }

};



int main()
{

    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            grid[row][column] = ".";
        }
    }
    
    string key;
    int row = 0;
    int column = 1;
    int speed = 20;
    int speedcount = 0;

    while (true) {


        // falling blocks
        std::this_thread::sleep_for(50ms); // game tick (every second block will fall)
        speedcount++;


             // kkhbit will now contain the getch and other code can run without waiting for keypress
            if (_kbhit()) {

                key = _getch();

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
                    }
                }

                if (key == "a") {
                    if (column - 1 >= 0) {
                        swap(grid[row][column], grid[row][column - 1]);
                        column--;
                    }
                }
                    
                if (key == "q") {
                    return 0;
                }

            }


            if (speedcount == speed) {

                if (grid[3][0] == "[]" and grid[3][1] == "[]" and grid[3][2] == "[]") {
                    //grid[row + 3][column + 0] = "-";
                    //grid[row + 3][column + 1] = "-";
                    //grid[row + 3][column + 2] = "-";
                    grid[3][0] = ".";
                    grid[3][1] = ".";
                    grid[3][2] = ".";
                }


                //if (grid[3][0] == "[]") {
                //    //grid[row-1][column] = "[]";
                //    //row++;
                //    grid[2][0] = "[]";
                //}


                speedcount = 0;
                grid[row][column] = "."; // stops duplication of block by replacing them with dot grid

                if (row + 1 < 4) {
                    row++;
                    grid[row][column] = "[]";
                }
                
                if (row == 3) {
                    row = 0;
                    column = 1;
                    grid[row][column] = "[]"; // brings [] to the top
                }


            }

            system("CLS");
            display_grid(grid, row, column);
    }
};

