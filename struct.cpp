#include<iostream>
using namespace std;

struct book{
    private:
    int bookid;
    char title[20];
    float price;
    char theme[20];
    public:
    void input(){
    cout<<"Enter The BookId Of Your Book: ";
    cin>>bookid;
    cout<<"Enter The Title Of Your Book: ";
    cin>>title;
    cout<<"Enter The Theme Of Your Book: ";
    cin>>theme;
    cout<<"Enter The Price Of Your Book: ";
    cin>>price;
    }
    void display(){
        cout<<"The BookId Of Your Book Is: "<<bookid<<endl;
        cout<<"The Title Of Your Book Is: "<<title<<endl;
        cout<<"The Theme Of Your Book Is: "<<theme<<endl;
        cout<<"The Price Of Your Book Is: "<<price<<endl;
    }
};

int main(){

    book b1;
    b1.input();
    b1.display();
}
