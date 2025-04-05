//Copy Constructor & Calling It.
#include<iostream>
using namespace std;

class Complex{
    private:
    int a,b;
    public:
    Complex(int x, int y){ //Parameterized Constructor
        a=x, b=y;
    }
    Complex(int k){
        a=k;
    }
    Complex(){ //Default Constructor
    }
    Complex(Complex &c){  //Copy Constructor
        a=c.a;
        b=c.b;
    }
    
    void show_data(){
        cout<<"Value of A is: "<<a<<" and Value of B is: "<<b<<endl;
    }
};

int main(){
    Complex c1(5,4);
    c1.show_data();
    Complex c2 = c1;
    c2.show_data();
}