
#include "student.h"
#include<bits/stdc++.h>

using namespace std;


#define ln  "\n"


student::student() : count(0) ,increament(1){ }


void student::setIncrementStep(int step_val)
{
    if(count==0 && step_val>0){
        increament=step_val;
    }
    else if(step_val<0){
        cout<<"Increament step can not be negative"<<ln;
        
    }
    else{
        cout<<"Cannot set increament.The count is not zero"<<ln;
    }
}

int student :: getCount() const{
    return count;
}

void student :: increment(){
    count+=increament;
}

void student :: resetCount(int step){
    count=0;
    if(step>0){
        increament=step;
    }
    else{
        increament=1;
    }
}

student student :: operator+(const student &a) const{
    student ans;
    if(this->increament==a.increament){
        ans.count=this->count+a.count;
        ans.increament=this->increament;
    }
    else{
        cout<<"increment steps are not same can not add them"<<ln;
    }
    return ans;
}

bool student :: operator>(const student &a) const{
    return this->count>a.count;
}

bool student :: operator<(const student &a) const{
    return this->count<a.count;
}

bool student :: operator>=(const student &a) const{
    return this->count>=a.count;
}

bool student :: operator<=(const student &a) const{
    return this->count<=a.count;
}

bool student :: operator==(const student &a) const{
    return this->count==a.count;
}

bool student :: operator!=(const student &a) const{
    return this->count!=a.count;
}

student student :: operator+=(const student &a){
    this->count+=a.count;
    this->increament=max(this->increament,a.increament);
    return *this;
}

student student :: operator++(){
    this->increment();
    return *this;
}

student student :: operator++(int){
    student temp=*this;
    this->increment();
    return temp;
}

void student :: testFunction(const student &a) const{
    cout << "Count: " << a.getCount() << ln;
}
student::~student()
{
}
