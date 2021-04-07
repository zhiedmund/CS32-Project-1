//
//  History.hpp
//  Project1
//
//  Created by Edmund Zhi on 4/1/21.
//

#ifndef History_h
#define History_h

#include "globals.h"

class History {
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int mGrid[MAXROWS][MAXCOLS];
    int mRows;
    
    int mCols;
};



#endif /* History_h */
