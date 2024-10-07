#ifndef COORDINATE_H
#define COORDINATE_H

#include<bits/stdc++.h>
using namespace std;

#define ln  "\n"

class Coordinate
{
private:
    float abscissa;
    float ordinate;
public:
    Coordinate();
    Coordinate(float x,float y);
    ~Coordinate();

    void display() const;

    float operator-(Coordinate a) const;

    float getDistance();

    void move_x(float val);

    void move_y(float val);

    void move(float x_val,float y_val);

    bool operator>( Coordinate a);

    bool operator<( Coordinate a);
    bool operator>=( Coordinate a);

    bool operator<=( Coordinate a);

    bool operator==( Coordinate a);
    bool operator!=( Coordinate a);




};

#endif