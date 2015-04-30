/* 
 * File:   sudoku.cpp
 * Author: Mariana Herzog
 *
 * Created on April 10, 2015, 5:09 PM
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include "Sudoku.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ifstream sudoku("sudoku.txt");
    string values;
    string gridStr;    //not sure if needed
    string grid[9];
    int sum = 0;
    while (!sudoku.eof()) {
        getline(sudoku, values);
        for(int i = 0; i < 9; i++){
            getline(sudoku, grid[i]);
            
            cout << grid[i] << endl;
        }
    }
    cout << "Sum: " << sum << endl;
    
    return 0;
}

