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

//void display_grid(string _grid[4][3]);

void display_grid(string _grid[4][3], int r, int c) {

    //std::cout << "\x1B[2J\x1B[H";  // clear the console
    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            //grid[0][1] = "[]";
            grid[row][column] = ".";
            //cout << "\t" << grid[row][column];
        }
        //cout << "\n" << "\n";
    }

    grid[r][c] = "[]";

    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            //grid[0][1] = "[]";
            cout << "\t" << grid[row][column];
        }
        cout << "\n" << "\n";
    }
    //grid[0][1] = "[]";

};

//string grid[4][3];
//void display_grid(int x, int y) {
//    for (int row = 0; row < 4; row++) {
//        for (int column = 0; column < 3; column++) {
//            grid[row][column] = ".";
//        }
//    }
//
//    grid[x][y] = "[]";
//
//    for (int row = 0; row < 4; row++) {
//        for (int column = 0; column < 3; column++) {
//            cout << "\t" << grid[row][column];
//        }
//        cout << "\n" << "\n";
//    }
//}


// the if statement code might be able to create a delay if i can add animation movement which creates a delay so work on adding downwards animation

string newthing[4][3];


void A(int x, int y) {

    system("CLS");
    for (int c = 0; c < 4; c++) {
        for (int r = 0; r < 3; r++) {
            newthing[c][r] = "o";
        }
    }
    newthing[x][y] = "[]";

    for (int c = 0; c < 4; c++) {
        for (int r = 0; r < 3; r++) {
            cout << "\t" << newthing[c][r];
        }
        cout << "\n" << "\n";
    }

}

void moveToLocation(int x, int y)
{
    //A(x - 1, y);
    A(x, y);
}



int main()
{

    //moveToLocation(0, 1);
    //Sleep(1000);
    //moveToLocation(1, 1);
    //Sleep(1000);
    //moveToLocation(2, 1);
    //Sleep(1000);
    //moveToLocation(3, 1);
    //Sleep(10000);
    //grid[4][3];

    string key;
    
    int row = 0;
    int column = 1;
    
    //grid[row][column] = "[]";
    //grid[row][column];

    for (int ro = 0; ro < 4; ro++) {
      
        system("CLS");
        //std::cout << "\x1B[2J\x1B[H";
        display_grid(grid, ro, column);

        std::this_thread::sleep_for(1000ms);

        //c += r % 2 == 0 ? 1 : -1;
        //grid[0 + 1][1] = "[]";
        //grid[r + 1][column] = "[]";
        //column += 1;
        
        //ro += 1;
        grid[ro + 1][column];

        //column += r % 2 == 0 ? 1 : -1;
        //grid[row + 1][column] = "[]";

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
        display_grid(grid, ro, column);
    }

};

//void display_grid(string _grid[4][3]) {
//
//    for (int row = 0; row < 4; row++) {
//        for (int column = 0; column < 3; column++) {
//            //grid[0][1] = "[]";
//            cout << "\t" << grid[row][column];
//        }
//        cout << "\n" << "\n";
//    }
//};