//
//  Flatulan.hpp
//  Project1
//
//  Created by Edmund Zhi on 4/1/21.
//

#ifndef Flatulan_h
#define Flatulan_h

class City;

class Flatulan
{
  public:
        // Constructor
    Flatulan(City* cp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;
    bool haveIBeenConverted() const;

        // Mutators
    void move();

  private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif /* Flatulan_h */
