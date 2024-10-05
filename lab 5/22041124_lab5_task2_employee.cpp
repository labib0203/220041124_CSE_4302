#include<bits/stdc++.h>
#include "Employee.h"
using namespace std;
Employee::Employee()
{
    //ctor
    //setInfo();
    name="John Doe";
    dob[0]=1,dob[1]=1,dob[2]=2002;
    salary=10000;
}

void Employee :: setName(){
    //cin.ignore();
    getline(cin,name);
    if(name.size()<=2){
        name="John Doe";
    }

}

void Employee :: setDob(){
    cin.ignore();
    cin>>dob[0]>>dob[1]>>dob[2];
    int dif=2024-dob[2];
    if(dif<18){
        dob[0]=1,dob[1]=1,dob[2]=2002;
    }
    //cin.ignore();
}
void Employee :: setSalary(){
    cin.ignore();
    cin>>salary;
    if(salary<10000 || salary>100000){
        salary=10000;
    }
    cin.ignore();
}

void Employee :: setInfo(){
    setName();
    setDob();
    setSalary();
}
string Employee :: getName() const {
    return name;
}

int Employee :: getSalary() const {
    return salary;
}

int* Employee :: getDob(){
    return dob;
}

void Employee :: getInfo() {
    cout<<"Name :"<<getName()<<endl;
    int *p=getDob();
    cout<<"Date of Birth :"<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;
    cout<<"Salary :"<<getSalary()<<endl;
}

Employee Employee :: compare(const Employee &a) const{
    Employee temp;
    if(dob[2]<=a.dob[2]){
        temp.name=getName();
        temp.dob[0]=dob[0];
        temp.dob[1]=dob[1];
        temp.dob[2]=dob[2];
        temp.salary=getSalary();
    }
    else temp=a;

    return temp;
}
Employee::~Employee()
{
    //dtor
}
