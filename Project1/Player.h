//
//  Player.hpp
//  Project1
//
//  Created by Edmund Zhi on 4/1/21.
//

#ifndef Player_h
#define Player_h


class City;

class Player
{
public:
      // Constructor
  Player(City *cp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    int  health() const;
    bool isPassedOut() const;

        // Mutators
    void  preach();
    void  move(int dir);
    void  getGassed();

  private:
    City* m_city;
    int   m_row;
    int   m_col;
    int   m_health;
    int   m_age;
};


#endif /* Player_h */
