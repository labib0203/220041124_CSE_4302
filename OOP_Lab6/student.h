#ifndef STUDENT_H
#define STUDENT_H

#include<bits/stdc++.h>
using namespace std;

#define ln  "\n"
class student
{
private:
    int count;
    int increament;
public:
    student();
    void setIncrementStep(int step_val);
    int getCount() const;
    void increment();
    void resetCount(int step=1);
    student operator+(const student &a) const;
    bool operator>(const student &a) const;
    bool operator<(const student &a) const;
    bool operator>=(const student &a) const;
    bool operator<=(const student &a) const;
    bool operator==(const student &a) const;
    bool operator !=(const student &a) const;
    student operator+=(const student &a);
    student operator++();
    student operator++(int);
    void testFunction(const student &a) const;
    ~student();
};


#endif