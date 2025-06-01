//class and objects
#include<iostream>
#include<iostream>
using namespace std;
class student{
    public:
         string name;
         int id;
         string course;

         void Introduce(){
            cout<<"the name of the student is"<<name<<endl;
            cout<<"the id of the student is"<<id<<endl;
            cout<<"the course of the student is"<<course<<endl;
         
         }
}
int main(){
    student s1;
    s1.name="gaurav";
    s1.id=1;
    s1.course="MECH"
    s1.Introduce();
}