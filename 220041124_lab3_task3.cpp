#include<bits/stdc++.h>
using namespace std;


#define int long long
#define ln  "\n"

class Time
{
    private:
    int hour;
    int minute;
    int second;

    public:
    Time(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    int hours();
    int minutes();
    int seconds();
    void reset(int h,int m,int s);
    void advance(int h,int m,int s);
    void print();
};


int Time :: hours(){
    return hour;
}

int Time :: minutes(){
    return minute;
}

int Time :: seconds(){
    return second;
}

void Time :: reset(int h,int m,int s){
    if(h>24 || h<0 || m>60 || m<0 || s>60 || s<0){
        cout<<"Inavlid input"<<ln;
        return;
    }
    hour=h;
    minute=m;
    second=s;
}

void Time :: advance(int h,int m,int s){
    s+=second;
    second=s%60;
    m+=(s/60);
    m+=minute;
    minute=m%60;
    h+=(m/60);
    h+=hour;
    hour=h%24;

}

void Time :: print(){
    cout<<hour<<":"<<minute<<":"<<second<<ln;
}


signed main(){
    Time a1(10,52,48);
    a1.print();
    a1.advance(14,18,32);
    a1.print();
}