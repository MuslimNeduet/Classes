//Creating a Class & Calling a Class.
//Creating Instance Member Variable & Functions.
#include<iostream>
using namespace std;

class  Complex{
    private:
    int a,b;
    public:
    void set_data(int x, int y){ //Encapsulation
        a = x;
        b = y;
    }
    void show_data(){ //Encapsulation
        cout<<"A is "<<a<<"\nB Is "<<b<<endl;
    }
    Complex add(Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};

int main(){
    int a,b,c,d;
    Complex c1,c2,c3;
    cout<<"Enter Your Numbers: ";
    cin>>a>>b;
    cout<<"Enter Your Numbers: ";
    cin>>c>>d;
    c1.set_data(a,b);
    c2.set_data(c,d);
    c1.show_data();
    c2.show_data();
    c3=c1.add(c2);
    c3.show_data();

}