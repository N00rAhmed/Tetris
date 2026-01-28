# Tetris

### Introduction
This is project will be a tetris game. Tetris was a popular game in the 1980's, it basically lets the user place blocks in a grid and once a row is full the blocks disappear and you gain points. Currently this is an ongoing project so a lot of features arent implemented but this game is being developed to be used in the CLI.

### Languages and Tools
C++, Visual Studio

### Code Changes Update
for animating block movement was using arguments in `display_grid` function `void display_grid(string _grid[4][3], int r, int c)` but currently removed the arguments `void display_grid(string _grid[4][3])`. Here is what the display grid function would look like for animation:
```
string grid[4][3];

void display_grid(string _grid[4][3], int r, int c) {

//void display_grid(string _grid[4][3]) {

    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            grid[row][column] = ".";
        }
    }

    grid[r][c] = "[]";
    //grid[0][1] = "[]";

    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            //grid[0][1] = "[]";
            cout << "\t" << grid[row][column];
        }
        cout << "\n" << "\n";
    }

};
```

for the animation loop this was used:

```
int row = 0;
int column = 1;

for (int ro = 0; ro < 4; ro++) {
        system("CLS");
        display_grid(grid, ro, column);
        //display_grid(grid);
        std::this_thread::sleep_for(1000ms);
        grid[ro + 1][column];
        //grid[0 + 1][1];
    }
 ```
