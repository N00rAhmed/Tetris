// tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<list>
#include <string>
#include <windows.h>
#include <conio.h>
#include <thread>


    // make a grid - DONE
    // make square bracket blocks controls(up down left right) in grid - IN PROGRESS
    // animate blocks moving from up to down in grid - (for now id say move on to more important things because youve gotten animation to work)
    // after one block placed generate new block coming from top - DONE
    // make blocks stack and place in a row inside grid - IN PROGRESS
    // if row full of blocks then remove them - 

//using namespace std;
using namespace std::chrono_literals;


constexpr int NROWS = 4;
constexpr int NCOLS = 3;
using grid = std::string[NROWS][NCOLS];


void moveToLocation(grid& g, int x, int y) {
    std::cout << "\x1B[2J\x1B[H";  // clear the console

    for (int r = 0; r < NROWS; r++) {
        for (int c = 0; c < NCOLS; c++) {
            g[r][c] = ".";
        }
    }
    g[x][y] = "[]";

    for (int r = 0; r < NROWS; r++) {
        for (int c = 0; c < NCOLS; c++) {
            std::cout << "\t" << g[r][c];
        }
        std::cout << "\n" << "\n";
    }


}

//using namespace std::chrono_literals;
//
//constexpr int NROWS = 12;
//constexpr int NCOLS = 8;
//using grid_type = std::string[NROWS][NCOLS];

//string player;


//string grid[4][3] = {
//{".", ".", "."},
//{".", ".", "."},
//{".", ".", "."},
//{".", ".", "."}
//};


//void display_grid(string _grid[4][3]);

//string newthing[4][3];

//void A(int x, int y) {
//
//    system("CLS");
//    for (int c = 0; c < 4; c++) {
//        for (int r = 0; r < 3; r++) {
//            newthing[c][r] = "o";
//        }
//    }
//    newthing[x][y] = "[]";
//
//    for (int c = 0; c < 4; c++) {
//        for (int r = 0; r < 3; r++) {
//            cout << "\t" << newthing[c][r];
//        }
//        cout << "\n" << "\n";
//    }
//}


//void moveToLocation(int x, int y)
//{
//    A(x, y);
//}




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

    // We define a grid
    grid mygrid;

    // We set the initial column (in the middle).
    int c = NCOLS / 2;

    // We iterate each row
    for (int r = 0; r < NROWS; r++) {
        moveToLocation(mygrid, r, c);
        std::this_thread::sleep_for(500ms);
        //c += r % 2 == 0 ? 1 : -1; // let the column change a little bit
        c;
    }

    std::string key;
    
    int row = 0;
    int column = 1;
    
    
    //grid[row][column] = "[]";

    //display_grid(grid);

    while (true) {

        key = _getch();

        if (key == "s") {
            if (row + 1 < 4) {
                swap(mygrid[row][column], mygrid[row + 1][column]);
                row++;
            }
            if (row == 3) {
                row = 0;
                column = 1;
                mygrid[row][column] = "[]";
            }
        }
        if (key == "d") {

            if (row == 3) {
                mygrid[row][column];
            }

            else if (column + 1 < 3) { // stops character from going outside grid
                swap(mygrid[row][column], mygrid[row][column + 1]);
                column++;
            }
        }
        if (key == "a") {
            if (row == 3) {
                mygrid[row][column];
            }

            else if (column - 1 >= 0) {
                swap(mygrid[row][column], mygrid[row][column - 1]); 
                column--;
            }
        }

        int ro = 0;
        int col = 0;

        if (mygrid[ro + 3][col + 0] == "[]" and mygrid[ro + 3][col + 1] == "[]" and mygrid[ro + 3][col + 2] == "[]") {

            mygrid[ro + 3][col + 0] = "-";
            mygrid[ro + 3][col + 1] = "-";
            mygrid[ro + 3][col + 2] = "-";
        }

        if (key == "q") {
            return 0;
        }

        system("CLS");

        //display_grid(mygrid);
        
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