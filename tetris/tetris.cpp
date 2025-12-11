// tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
#include <string>
#include <windows.h>
#include <conio.h>



    // make a grid - DONE
    // make square bracket blocks controls(up down left right) in grid - IN PROGRESS
    // animate blocks moving from up to down in grid - (for now id say move on to more important things because youve gotten animation to work)
    // after one block placed generate new block coming from top - DONE
    // make blocks stack and place in a row inside grid - IN PROGRESS
    // if row full of blocks then remove them - 

using namespace std;

string player;


string grid[4][3] = {
{".", ".", "."},
{".", ".", "."},
{".", ".", "."},
{".", ".", "."}
};


void display_grid(string _grid[4][3]);


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


//void A(string _gridd[4][3]);

//A(string _gridd[4][3])

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


    string key;
    
    int row = 0;
    int column = 1;

    grid[row][column] = "[]";

    //player = "[]";

    display_grid(grid);

    while (true) {


        key = _getch();


        //if (key == "w") {
        //    if (row - 1 >= 0) { // stops character from going outside grid
        //        swap(grid[row][column], grid[row - 1][column]);
        //        row--;
        //    }
        //}

        // make block place at the bottom and freeze in location
        // could add condition in other controls
        if (key == "s") {
            if (row + 1 < 4) {
                swap(grid[row][column], grid[row + 1][column]);

                //Sleep(1000);
                row++;
                //Sleep(1000);

            }
            if (row == 3) {
                row = 0;
                column = 1;
                //grid[0][1] = "[]";
                grid[row][column] = "[]";


                //grid[row+3][column-1] = "-";

                //Sleep(1000);


                // 
                //swap(grid[row][column], grid[row - 1][column]);
                //row--;                
            }

            //row = 3;
            //column = 0;
            // and grid[row][column+1] == "[]"
            //if (grid[row=3][column=0] == "[]") {
                //system("CLS");
                //grid[row][column] == ".";
            //}
            //if (grid[row][column] = ) {
                //grid[row][column] == ".";
            //}

            //int ro = 3;
            //int co = 0;

            //if (grid[ro][co] == "[]" and grid[ro][co+1] == "[]") {
            //    system("CLS");
            //    grid[ro][co] == "+";
            //    cout << "\t" << grid[ro][co];
            //}

        }
        if (key == "d") {

            if (row == 3) {
                //grid[row];
                grid[row][column];
                // 
                //swap(grid[row][column], grid[row][column - 1]);
                //column--;
            }

            else if (column + 1 < 3) { // stops character from going outside grid
                swap(grid[row][column], grid[row][column + 1]);
                column++;
            }
        }
        if (key == "a") {
            if (row == 3) {
                //swap(grid[row][column], grid[row][column + 1]);
                //column++;
                //grid[row];
                grid[row][column];
            }

            else if (column - 1 >= 0) {
                swap(grid[row][column], grid[row][column - 1]);
                column--;
            }
        }

        //int ro = 3;
        //int co = 0;

        //if (grid[ro][co] == "[]" ) {
        //    //system("CLS");
        //    grid[ro][co] == "+";
        //    cout << "\t" << grid[ro][co];
        //}
        //grid[0][1] = "[]";
        //Sleep(1000);
        //string v;
        //Sleep(1000);
        //v = grid[3][2];

        if (grid[3][0] == "[]" and grid[3][1] == "[]" and grid[3][2] == "[]") {
            //Sleep(1000);
            grid[row + 3][column - 1] = "-";
            grid[row + 3][column + 0] = "-";
            grid[row + 3][column + 1] = "-";
        }


        //row = 3;
        //column = 0;
        //// and grid[row][column+1] == "[]"
        //if (grid[row][column] == "[]") {
            //system("CLS");
            //grid[row][column] == ".";
        //}
        //if (grid[row = 3][column = 0] == "[]") {
        //    system("CLS");
        //    grid[row][column] == "+";

        //}

        //grid[row][column] = "[]";
        //if (grid == [row][column]) {
        //
        // make blocks dissapear when row is filled
        // check index 0 - 2 of [row]



        //for (int row = 0; row < 4; row++) {
            //for (int column = 0; column < 3; column++) {
                
                //cout << "\t" << grid[row][column];

            //}
            //cout << "\n" << "\n";
        //}



        if (key == "q") {
            return 0;
        }

        system("CLS");
        display_grid(grid);

        
    }

};



void display_grid(string _grid[4][3]) {
    
    for ( int row = 0; row < 4; row++) {
        for ( int column = 0; column < 3; column++) {
            //grid[0][1] = "[]";
            cout << "\t" << grid[row][column];
        }
        cout << "\n" << "\n";
    }
}
