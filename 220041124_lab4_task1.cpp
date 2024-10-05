#include<bits/stdc++.h>
using namespace std;


#define int long long
#define ln  "\n"


class Calculator
{
    private:
    int currentStatus;

    int getcurrentStatus(){
        return currentStatus;
    }

    void setcurrentStatus(int val){
        currentStatus=val;
    }

    public:
    Calculator(){
        setcurrentStatus(0);
    }

    Calculator(int val){
        setcurrentStatus(val);
    }

    ~Calculator(){
        cout<<"Calculator display: "<<getcurrentStatus()<<ln;
        cout<<"Destructor of the calculator object is called"<<ln;
    }

    void add(int val){
        int x=getcurrentStatus();
        x+=val;
        setcurrentStatus(x);
    }

    void subtract(int val){
        int x=getcurrentStatus();
        x-=val;
        setcurrentStatus(x);
    }

    void multiply(int val){
        int x=getcurrentStatus();
        x*=val;
        setcurrentStatus(x);
    }

    int divideBy(int val){
        if(val==0){
            cout<<"Invalid arithmetic operation"<<ln;
            return 0;
        }

        int x=getcurrentStatus();
        int rem=x%val;
        x/=val;
        setcurrentStatus(x);
        return rem;

    }

    void clear(){
        setcurrentStatus(0);
    }

    void display(){
        cout<<"Calculator display :"<<getcurrentStatus()<<ln;
    }
};

signed main(){

    Calculator calc;
    //calc.display();
    calc.add(10);calc.display();
    calc.add(7);calc.display();
    calc.multiply(31);calc.display();
    calc.subtract(42);calc.display();
    calc.divideBy(7);calc.display();
    calc.divideBy(0);calc.display();
    calc.add(3);calc.display();
    calc.clear();calc.display();
    
}