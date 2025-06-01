//Inheritance
#include<iostream>
using namespace std;
class student{
    public:
        int marks=97;
};

class tony: public student{
    public:
        int marksdetected=5;
};

int main(){
    tony t1;
    cout<<"the marks obtained by tony is"<<t1.marks<<endl;
    cout<<"the marks detected bye tony is"<<t1.marksdetected<<endl;
}