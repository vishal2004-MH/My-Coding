//Abstraction
#include<iostream>
using namespace std;
class abstractstudent{
    virtual void scholarship()=0;
};

class student: abstractstudent{
    public:
        string name;
        int marks;
        string course;
        void scholarship(){
            if (marks>70)
            cout<<"Scholarship has been given to "<<name;
            else 
            cout<<"deny";
        }
};

int main(){
    student s1;
    s1.name="vishal";
    s1.marks=80;
    s1.scholarship ();
}