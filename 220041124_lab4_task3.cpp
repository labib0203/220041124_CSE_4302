#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ln  "\n"


class BankAccount
{
    private:
    static int total_customer;
    static int current_customer;
    static double SourceTax;
    
    int acc_num;
    string holder_name;
    string account_type;
    float current_balance;
    const float minimum_balance=500;

    public:
    BankAccount(){
        total_customer++;
        current_customer++;
    }
    BankAccount(int acc_num,string holder_name,string account_type,float current_balance /*,const float minimum_balance*/){
        if(account_type!="Current" && account_type!="Savings"){
            cout<<"Invalid account type"<<ln;
            return;
        }
        else if(current_balance<minimum_balance){
            cout<<"Please deposit amount more than 100"<<ln;
            return;
        }
        this->acc_num=acc_num;
        this->holder_name=holder_name;
        this->account_type=account_type;
        this->current_balance=current_balance;
        total_customer++;
        current_customer++;
    }
    void FillInfo(int acc_num,string holder_name,string account_type,float current_balance){
        if(account_type!="Current" && account_type!="Savings"){
            cout<<"Invalid account type"<<ln;
            return;
        }
        else if(current_balance<minimum_balance){
            cout<<"Please deposit amount more than 100"<<ln;
            return;
        }
        this->acc_num=acc_num;
        this->holder_name=holder_name;
        this->account_type=account_type;
        this->current_balance=current_balance;
        
    }
    void showInfo(){
         if(account_type!="Current" && account_type!="Savings"){
            cout<<"No accounts has been created"<<ln;
            return;
        }
        else if(current_balance<minimum_balance){
            cout<<"No accounts has been created"<<ln;
            return;
        }
        cout<<"The bank account number is :"<<acc_num<<ln;
        cout<<"The holder name is :"<<holder_name<<ln;
        cout<<"The account type is :"<<account_type<<ln;
        cout<<"The current balance is :"<<current_balance<<ln;
    }

    void showBalance(){
        cout<<"The current balance is "<<current_balance<<ln;
    }

    void deposit(float val){
        if(val<=0){
            cout<<"Your deposit amount must bu greater than 0"<<ln;
            return;
        }

        current_balance+=val;
    }
    void withdrawal(float val){
        int dif=current_balance-val;
        if(dif<minimum_balance){
            cout<<"Invalid withdrawal request"<<ln;
            return;
        }

        current_balance-=dif;
    }

    void giveInterest(){
        float i=current_balance*0.03;
        float tax=i*0.1;
        SourceTax+=tax;
        i-=tax;
        current_balance+=i;
    }

    ~BankAccount(){
        cout<<"Account of Mr."<<holder_name<<" with account no "<<acc_num<<" is destroyed with BDT "<<current_balance<<ln;
        current_customer--;
    }

    static int getTotalAccounts() {
        return total_customer;
    }

    static int getCurrentAccounts() {
        return current_customer;
    }

    float getBalance() const{
        return current_balance;
    }

    string getholder(){
        return holder_name;
    }
    

};

int BankAccount :: total_customer=0;
int BankAccount :: current_customer=0;
double BankAccount :: SourceTax=0;


void display_stat() {
    cout << "Total number of BankAccount objects created: " << BankAccount::getTotalAccounts() << endl;
    cout << "Total number of BankAccount objects currently present: " << BankAccount::getCurrentAccounts() << endl;
    
}

BankAccount Larger(const BankAccount A,const BankAccount B){
    const float x=A.getBalance();
    const float y=B.getBalance();
    if(x>y){
        return A;
    }
    else if(x<=y){
        return B;
    }

    BankAccount z;
    return z;
}








signed main(){
    BankAccount a1(1,"XYZ","Current",4000);
    BankAccount a2(2,"Labib","Savings",5000);
    a1.showInfo();
    a2.showInfo();
    a1.showBalance();
    a2.showBalance();
    a1.deposit(300);
    a2.deposit(3000);
    a1.giveInterest();
    a2.giveInterest();
    
    BankAccount x=Larger(a1,a2);
    const float y=x.getBalance();
    cout<<"Larger account with current balance "<<y<<" is Mr. "<<x.getholder()<<ln;

}