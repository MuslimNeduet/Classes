// Default/Parameterized/Default Constructor
#include<iostream>
using namespace std;

class Complex{
    private:
    int a; int b;
    public:
    Complex(int x, int y){ //Parameterized Constructor
        a=x, b=y;
    }
    Complex(int k){
        a=k;
    }
    Complex(){ //Default Constructor

    }

    void show_data(){
        cout<<"Value of A is: "<<a<<" and Value of B is: "<<b<<endl;
    }
    void show_data1(){
        cout<<"Value of A is: "<<a;
    }


};

int main(){
    int a, b,c;
    cout<<"Enter Your First Number: ";
    cin>>a;
    cout<<"Enter Your Second Number: ";
    cin>>b;
    cout<<"Enter Your Third Number: ";
    cin>>c;
    Complex c1(a,b), c2(c);
    c1.show_data();
    c2.show_data1();
}