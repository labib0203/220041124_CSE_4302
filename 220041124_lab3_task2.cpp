#include<bits/stdc++.h>
using namespace std;


#define int long long
#define ld  long double
#define ln  "\n"


class Temp
{
    private:
    ld temp;
    char current_unit;
    char valid_unit1,valid_unit2,valid_unit3;
    ld c,f,k;

    public:
    Temp(){
        temp=-1e5;
        current_unit='x';
        valid_unit1='C',valid_unit2='F',valid_unit3='K';
        c=-273.15,f=((-273.15)*(9/5)+32),k=0;
    }

    void assign(ld t,char ch);
    ld convert(char ch);
    void print();
};


void Temp :: assign(ld t,char ch){
    if((ch!=valid_unit1 && t<c) || (ch!=valid_unit2 && t<f) || (ch!=valid_unit3 && t<k)){
        cout<<"Inavlid Input"<<ln;
    }
    else{
        temp=t;
        current_unit=ch;
    }
}

ld Temp :: convert(char ch){
    if(ch!=valid_unit1 && ch!=valid_unit2 && ch!=valid_unit3){
        cout<<"Inavlid unit"<<ln;
        return -1e5;
    }
    if(ch==current_unit){
        return temp;
    }
    else if(current_unit==valid_unit1){
        if(ch==valid_unit2){
            temp=(temp*(9/5)+32);
            current_unit=ch;
            return temp;
        }
        else if(ch==valid_unit3){
            temp=temp+273.15;
            current_unit=ch;
            return temp;
        }
    }
    else if(current_unit==valid_unit2){
        temp=(5*temp-160)/9;
        if(ch==valid_unit1){
            current_unit=ch;
            return temp;
        }
        else if(ch==valid_unit3){
            current_unit=ch;
            return (temp+273.15);
        } 
    }
    else if(current_unit==valid_unit3){
        temp=temp-273;
        if(ch==valid_unit1){
            current_unit=ch;
            return temp;
        }
        else if(ch==valid_unit2){
            current_unit=ch;
            temp=(temp*(9/5)+32);
        }
    }
    return -1e5;
}

void Temp :: print(){
    if(temp==-1e5 || current_unit=='x'){
        cout<<"No value has been assigned"<<ln;
        return;
    }
    if(current_unit==valid_unit1){
        cout<<"The temperature is "<<temp<<" Celsius"<<ln;
    }
    else if(current_unit==valid_unit2){
        cout<<"The temperature is "<<temp<<" Farenhite"<<ln;
    }
    else{
        cout<<"The temperature is "<<temp<<" Kelvin"<<ln;
    }
}
signed main(){
    Temp a1;
    a1.print();
    a1.assign(45.56,'C');
    a1.print();
    a1.convert('K');
    a1.print();
    a1.assign(0,'C');
    a1.convert('F');
    a1.print();




}