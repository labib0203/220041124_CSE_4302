#include<bits/stdc++.h>
using namespace std;

#define ln "\n"


class Coordinate
{
private:
    float abscissa;
    float ordinate;
public:
    Coordinate(): abscissa(0),ordinate(0){
    }
    Coordinate(float x,float y) : abscissa(x),ordinate(y){}
    ~Coordinate(){

    }

    void display() const{
        cout<<"Coordinate: ("<<abscissa<<","<<ordinate<<")"<<ln;
    }

    float operator-(Coordinate a) const{
        return sqrt(pow(a.abscissa-this->abscissa,2)+pow(a.ordinate-this->ordinate,2));
    }

    float getDistance(){
        return sqrt(pow(abscissa,2)+pow(ordinate,2));
    }

    void move_x(float val){
        abscissa+=val;
    }

    void move_y(float val){
        ordinate+=val;
    }

    void move(float x_val,float y_val){
        abscissa+=x_val;
        ordinate+=y_val;
    }

    bool operator>( Coordinate a)  {
        return this->getDistance() > a.getDistance();
    }

    bool operator<( Coordinate a)  {
        return this->getDistance() < a.getDistance();
    }

    bool operator>=( Coordinate a)  {
        return this->getDistance() >= a.getDistance();
    }

    bool operator<=( Coordinate a)  {
        return this->getDistance() <= a.getDistance();
    }

    bool operator==( Coordinate a)  {
        return this->getDistance() == a.getDistance();
    }

    bool operator!=( Coordinate a)  {
        return this->getDistance() != a.getDistance();
    }

    float Coordinate :: random_float(float mn,float mx){
        return (float)rand()/RAND_MAX*(mx-mn)+mn;
    }
    void randomAssignment(){
        abscissa=random_float(0,10000.0);
        ordinate=random_float(0,100000.0);
    }

    void sort(Coordinate a[],int n){
        for(int i=0;i<n-2;i++){
            for(int j=i;j<n-1;j++){
                if(a[i].getDistance()>a[j].getDistance()){
                    swap(a[i],a[j]);
                }
            }
        }
    }


};

int main(){

}