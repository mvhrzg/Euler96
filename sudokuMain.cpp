/* 
 * File:   sudoku.cpp
 * Author: MHerzog
 *
 * Created on April 10, 2015, 5:09 PM
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ifstream sudoku("sudoku.txt");
    string values;
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

