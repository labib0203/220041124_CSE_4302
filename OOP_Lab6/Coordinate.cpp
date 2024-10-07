#include "Coordinate.h"
#include<bits/stdc++.h>

using namespace std;

Coordinate :: Coordinate(): abscissa(0),ordinate(0){ }
Coordinate :: Coordinate(float x,float y) : abscissa(x),ordinate(y){}
Coordinate :: ~Coordinate(){}

void Coordinate :: display() const{
        cout<<"Coordinate: ("<<abscissa<<","<<ordinate<<")"<<ln;
}

float Coordinate :: operator-(Coordinate a) const{
        return sqrt(pow(a.abscissa-this->abscissa,2)+pow(a.ordinate-this->ordinate,2));
}

float Coordinate :: getDistance(){
        return sqrt(pow(abscissa,2)+pow(ordinate,2));
}

void Coordinate :: move_x(float val){
        abscissa+=val;
    }

    void Coordinate :: move_y(float val){
        ordinate+=val;
    }

    void Coordinate :: move(float x_val,float y_val){
        abscissa+=x_val;
        ordinate+=y_val;
    }

    bool Coordinate :: operator>( Coordinate a)  {
        return this->getDistance() > a.getDistance();
    }

    bool Coordinate :: operator<( Coordinate a)  {
        return this->getDistance() < a.getDistance();
    }

    bool Coordinate :: operator>=( Coordinate a)  {
        return this->getDistance() >= a.getDistance();
    }

    bool Coordinate :: operator<=( Coordinate a)  {
        return this->getDistance() <= a.getDistance();
    }

    bool Coordinate :: operator==( Coordinate a)  {
        return this->getDistance() == a.getDistance();
    }

    bool Coordinate :: operator!=( Coordinate a)  {
        return this->getDistance() != a.getDistance();
    }