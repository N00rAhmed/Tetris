# Tetris

### Introduction
This is project will be a tetris game. Tetris was a popular game in the 1980's, it basically lets the user place blocks in a grid and once a row is full the blocks disappear and you gain points. Currently this is an ongoing project so a lot of features arent implemented but this game is being developed to be used in the CLI.

### Languages and Tools
C++, Visual Studio

### Code Changes Update
for the new border on grid the dot is now two characters `grid[row][column] = ". ";`. This is because the block `"[]"` is two characters. This prevents the dots in the grid from misaligning/shifting out of place when movement occurs.
