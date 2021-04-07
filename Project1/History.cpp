//
//  History.cpp
//  Project1
//
//  Created by Edmund Zhi on 4/1/21.
//

#include "History.h"
#include <iostream>
#include "globals.h"

using namespace std;

History::History(int nRows, int nCols): mRows(nRows), mCols(nCols) {
    // Fill the grid with zeroes for ease of ++
    for (int r = 0; r < mRows; r++) {
        for (int c = 0; c < mCols; c++){
            mGrid[r][c] = 0;
        }
    }
}

bool History::record(int r, int c) {
    if (r > mRows || c > mCols || r < 1 || c < 1) {
        return false;
    }
    else {
        // adjust the counter to account for differences in array vs how grid functions
        mGrid[r-1][c-1]++;
        return true;
    }
}

void History::display() const {
    // clears screen
    clearScreen();
    // builds history grid
    char cityDisplay[MAXROWS][MAXCOLS];
    for (int r = 0; r < mRows; r++) {
        for (int c = 0; c < mCols; c++) {
            switch(mGrid[r][c]) {
                case 0: cityDisplay[r][c] = '.';
                    break;
                case 1: cityDisplay[r][c] = 'A';
                    break;
                case 2: cityDisplay[r][c] = 'B';
                    break;
                case 3: cityDisplay[r][c] = 'C';
                    break;
                case 4: cityDisplay[r][c] = 'D';
                    break;
                case 5: cityDisplay[r][c] = 'E';
                    break;
                case 6: cityDisplay[r][c] = 'F';
                    break;
                case 7: cityDisplay[r][c] = 'G';
                    break;
                case 8: cityDisplay[r][c] = 'H';
                    break;
                case 9: cityDisplay[r][c] = 'I';
                    break;
                case 10: cityDisplay[r][c] = 'J';
                    break;
                case 11: cityDisplay[r][c] = 'K';
                    break;
                case 12: cityDisplay[r][c] = 'L';
                    break;
                case 13: cityDisplay[r][c] = 'M';
                    break;
                case 14: cityDisplay[r][c] = 'N';
                    break;
                case 15: cityDisplay[r][c] = 'O';
                    break;
                case 16: cityDisplay[r][c] = 'P';
                    break;
                case 17: cityDisplay[r][c] = 'Q';
                    break;
                case 18: cityDisplay[r][c] = 'R';
                    break;
                case 19: cityDisplay[r][c] = 'S';
                    break;
                case 20: cityDisplay[r][c] = 'T';
                    break;
                case 21: cityDisplay[r][c] = 'U';
                    break;
                case 22: cityDisplay[r][c] = 'V';
                    break;
                case 23: cityDisplay[r][c] = 'W';
                    break;
                case 24: cityDisplay[r][c] = 'X';
                    break;
                case 25: cityDisplay[r][c] = 'Y';
                    break;
                default: cityDisplay[r][c] = 'Z';
                    break;
            }
        }
    }
    // displays the history grid
    for (int r = 0; r < mRows; r++) {
        for (int c = 0; c < mCols; c++) {
            cout << cityDisplay[r][c];
        }
        cout << endl;
    }
    // writes empty line after history grid
    cout << endl;
}

