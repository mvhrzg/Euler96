/* 
 * File:   sudoku.h
 * Author: MHerzog
 *
 * Created on April 10, 2015, 5:19 PM
 */

#ifndef SUDOKU_H
#define	SUDOKU_H
#include <string>
#include <iostream>

class Sudoku{
public:
    static const int DIGITS = 9;
    static const int CELLS = 81;
    const int SECStart[DIGITS][DIGITS] = {{0, 1, 2, 9, 10, 11, 18, 19, 20},
                                          {3, 4, 5, 12, 13, 14, 21, 22, 23},
                                          {6, 7, 8, 15, 16, 17, 24, 25, 26},
                                          {27, 28, 29, 36, 37, 38, 45, 46, 47},
                                          {30, 31, 32, 39, 40 41, 48, 49, 50},
                                          {33, 34, 35, 42, 43, 44, 51, 52, 53},
                                          {54, 55, 56, 63, 64, 65, 72, 73, 74},
                                          {57, 58, 59, 66, 67, 68, 75, 76, 77},
                                          {60, 61, 62, 69, 70, 71, 78, 79, 80}};
    
    Sudoku(std::string grid[DIGITS]);
    Sudoku(Sudoku *orig);
    Sudoku* solve();
    int digitCode();
    friend std::ostream &operator << (std::ostream &output, const Sudoku *puzzle);
    
private:
    int cell[CELLS];
    bool possible[CELLS][DIGITS+1];
    void markPossible(int index, int value);
    Sudoku* solveRec(int pos, Sudoku *grid);
    bool solutionFound();

}//Sudoku


#endif	/* SUDOKU_H */

