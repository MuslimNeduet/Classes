//Creating Static Member Variable & Calling it.
#include<iostream>
using namespace std;

class Account{
    private:
    int balance; //Instance Member Variable
    static float roi;      //Static/Class Member Variable
    public:
    void setbalance(int b){
        balance = b;
    }
    static void setRoi(float r){
        roi=r;
    }

};

float Account:: roi=3.5f; //definition

int main(){
    Account a1,a2;
    // Can Access If Public Accout::roi = 4.5f;
    a1.setRoi(4.5f);
    Account::setRoi(4.5f);
}