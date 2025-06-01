//run time polymorphism
#include<iostream>
using namespace std;
class Student{
    public:
     virtual void intro(){
        cout<<" the result of the student is intro"<<endl;
    }
    void display(){
        cout<<"the result of the student is display"<<endl;
    }
};

class Tony: public Student{
    void intro(){
        cout<<" the result of the tony is intro"<<endl;
    }
    void display(){
        cout<<"the result of the tony is display"<<endl;
    }
};

int main(){
    Student *st;
    Tony t;
    st=&t;
    st->intro();
    st->display();
}