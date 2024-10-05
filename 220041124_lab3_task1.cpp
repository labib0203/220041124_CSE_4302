#include<bits/stdc++.h>
using namespace std;


#define int long long
#define ln  "\n"


class Counter
{
    private:
    int count;
    int incrementStep;
    public:
    Counter(){
        count=0;
        incrementStep=0;
    }

    void setIncrementStep(int setp);
    int getCount();
    void increment();
    void resetCount();
};

void Counter :: setIncrementStep(int step){
    incrementStep=step;
}

int Counter :: getCount(){
    return count;
}

void Counter :: increment(){
    count+=incrementStep;
}

void Counter :: resetCount(){
    count=0;
}

signed main(){
    Counter cnt;
    cnt.setIncrementStep(2);
    cnt.increment();
    cout<<cnt.getCount()<<ln;
    cnt.increment();
    cnt.setIncrementStep(5);
    cnt.increment();
    cout<<cnt.getCount()<<ln;
    cnt.resetCount();
    cout<<cnt.getCount()<<ln;
}