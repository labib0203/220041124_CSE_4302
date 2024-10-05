#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<bits/stdc++.h>
using namespace std;

//enum Month {January,February,March,April,May,June,July,August,September,Ocotber,November,December};

class Employee
{
    private:
        string name;
        int dob[3];
        int salary;
    public:
        Employee();
        void setName();
        void setDob();
        void setSalary();
        void setInfo();
        string getName() const;
        int getSalary()const ;
         int* getDob() ;
        void getInfo() ;
        Employee compare(const Employee &a) const;
        ~Employee();



};

#endif // EMPLOYEE_H
