#include<bits/stdc++.h>
using namespace std;


#define int long long
#define ln  "\n"


class Flight
{
    private:
    int Flight_number;
    string destination;
    float distance;
    float MaxFuelCapacity;

    double CalFuel(){
        if(distance<=1000)return 500;
        else if(distance>1000 && distance<=200)return 1100;

        return 2200;
    }

    public:
    Flight(){
        Flight_number=-1;
        destination="";
        distance=-1;
        MaxFuelCapacity=-1;
    }
    void FeedInfo(){
        cout<<"Please enter the Flight number :";
        cin>>Flight_number;
        cout<<"Please enter the destination :";
        cin.ignore();
        //cin>>destination;
        getline(cin,destination);
        cout<<"Please enter the distance :";
        cin>>distance;
        cout<<"Please enter the Max Fuel Capacity :";
        cin>>MaxFuelCapacity;
    }

    void ShowInfo(){
        cout<<"The flight number is "<<Flight_number<<ln;
        cout<<"The destination spot is "<<destination<<ln;
        cout<<"The total distance is "<<distance<<ln;
        cout<<"The max fuel capacity is "<<MaxFuelCapacity<<ln;

        double f=CalFuel();
        if(f<=MaxFuelCapacity){
            cout<<"Fuel capacity is fit for this flight distance "<<ln;
        }
        else{
            cout<<"Not sufficient fuel capacity for this flight"<<ln;
        }

    }


};


signed main(){
    Flight f1;
    f1.FeedInfo();
    f1.ShowInfo();
}