// tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
#include <string>
#include <windows.h>
#include <conio.h>

    // make a grid - DONE
    // make square bracket blocks controls(up down left right) in grid - IN PROGRESS
    // animate blocks moving from up to down in grid - NOT STARTED
    // after one block placed generate new block coming from top
    // make blocks stack and place in a row inside grid
    // if row full of blocks then remove them

using namespace std;

string player;


string grid[4][3] = {
{".", ".", "."},
{".", ".", "."},
{".", ".", "."},
{".", ".", "."}
};
string newthing[4][3] = {
{ "o", "o", "o" },
{ "o", "o", "o" },
{ "o", "o", "o" },
{ "o", "o", "o" }
}; // 2d array



void display_grid(string _grid[4][3]);
void A(string _gridd[4][3]);

//A(string _gridd[4][3])

int main()
{
    //Sleep(1000);
    //system("CLS");
    //grid[1][1] = "[]";
    //Sleep(3000);
    //system("CLS");
    //grid[1][1] = "[]";
    //Sleep(3000);
    //system("CLS");

    //cout << "x.....";
    //Sleep(1000);
    //system("CLS");
    //cout << ".x....";
    //Sleep(1000);
    //system("CLS");
    //cout << "..x...";
    //Sleep(1000);
    //system("CLS");
    //cout << "...x..";
    //Sleep(1000);
    //system("CLS");
    //cout << "....x.";
    //Sleep(1000);
    //system("CLS");
    //cout << ".....x";
    //Sleep(2000);
    //system("CLS");


    //newthing[0][1] = "[]";
    //Sleep(2000);
    //system("CLS");
    //newthing[1][1] = "[]";

    //string a = newthing[0][1] = "[]";
    //Sleep(2000);
    //cout << a;
    //system("CLS");
    //string b = newthing[1][1] = "[]";
    //cout << b;

    //Sleep(2000);
    //newthing[0][1] = "[]";
    //Sleep(2000);
    //newthing[1][1] = "[]";
    //Sleep(2000);
    //newthing[2][1] = "[]";


    //newthing[0][1] = "[]";
    //cout << newthing[0][1];
    //cout << "index 1 = " << newthing[0][1];
    //Sleep(2000);
    //newthing[1][1] = "[]";
    //cout << newthing[1][1];
    //cout << "index 2 = " << newthing[1][1];
    //Sleep(2000);
    //newthing[2][1] = "[]";
    //cout << newthing[2][1];
    //cout << "index 3 = " << newthing[2][1];
    //A();

    newthing[0][1] = "[]";
    A(newthing);
    system("CLS");

    A(newthing);
    Sleep(1000);
    newthing[1][1] = "[]";
    system("CLS");
    
    //Sleep(2000);
    //newthing[2][2] = "[]";
    A(newthing);
    Sleep(1000);  
    newthing[2][1] = "[]";
    system("CLS");
    A(newthing);

    system("CLS");

    A(newthing);
    Sleep(1000);
    newthing[3][1] = "[]";
    system("CLS");
    A(newthing);
    //system("CLS");

    //A(newthing);
    //Sleep(1000);
    //newthing[2][1] = "[]";
    //cout << newthing[2][1];
    //system("CLS");





    //string a = newthing[0][1] = "[]";
    //Sleep(2000);
    //cout << a;
    //system("CLS");
    //string b = newthing[1][1] = "[]";
    //cout << b;
    
    Sleep(10000);


    string key;
    int row = 0;
    int column = 1;

    display_grid(grid);

    //for (int row = 0; row < 4; row++) {
        //for (int column = 0; column < 3; column++) {

    // make it go up until top
            
    // make sure player isnt duplicated when moved(duplicated because of hardcoded value needs to be removed when keypressed)


    while (true) {
        key = _getch();

        //if (grid[row][column] == player) {

        if (key == "w") {
            if (row - 1 >= 0) { // stops character from going outside grid
                
                // remove player value here from grid original location grid[2][1]


                swap(grid[row][column], grid[row - 1][column]);
                row--;

            }
        }
        if (key == "s") {
            if (row + 1 < 4) {
                swap(grid[row][column], grid[row + 1][column]);
                row++;

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

        system("CLS");
        display_grid(grid);

        
    }

};

void A(string _gridd[4][3]) {

    for (int c = 0; c < 4; c++) {
        for (int r = 0; r < 3; r++) {

            cout << "\t" << newthing[c][r]; // prints all content of array in single row


            //Sleep(2000);
            //system("CLS");
            //cout << "\t" << newthing[c][r];

            //Sleep(2000);
            //system("CLS");
            //newthing[1][1] = "[]";
            //cout << "\t" << newthing[c][r];
        }

        cout << "\n" << "\n"; // creates rows and spacing between rows

    }
    //cout << newthing;

}


void display_grid(string _grid[4][3]) {
    //player = "[]";

    //grid[0][1] = "[]";
    //Sleep(3000);
    //system("CLS");

    //grid[1][1] = "[]";
    //Sleep(3000);
    //system("CLS");
    //
    //grid[2][1] = "[]";


    for ( int row = 0; row < 4; row++) {
        for ( int column = 0; column < 3; column++) {
            
            // animation cant work in loop here because grid being rendered at the same time

            //player = "[]";

            //grid[0][1] = player;
            //
            //Sleep(1000);
            //system("CLS");
            //grid[1][1] = player;
            
            //system("CLS");

            grid[0][1] = "[]";
            cout << "\t" << grid[row][column];

            //Sleep(2000);
            //system("CLS");
            //grid[1][1] = "[]";
            //cout << "\t" << grid[row][column];


            //grid[0][1] = "[]";
            //Sleep(3000);
            //system("CLS");

            //grid[1][1] = "[]";
            //Sleep(3000);
            //system("CLS");
            
            //grid[2][1] = "[]";

        }
        cout << "\n" << "\n";

    }

    // Animate
    //grid[0][1] = player;
    //Sleep(1000);
    //system("CLS");
    //cout << "\t" << grid[0][1];

    //grid[1][1] = player;
    //Sleep(1000);
    //system("CLS");
    //cout << "\t" << grid[1][1];

    //grid[2][1] = player;
    //Sleep(1000);
    //system("CLS");
    //cout << "\t" << grid[2][1];

    //grid[3][1] = player;
    //Sleep(1000);
    //system("CLS");
    //cout << "\t" << grid[3][1];


}
