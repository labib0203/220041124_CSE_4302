#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee a1,a2;
    a1.setInfo();
    a1.getInfo();
    a2.setInfo();
    a2.getInfo();
    Employee a3=a1.compare(a2);
    a3.getInfo();


    return 0;
}
