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
         student(string n, int i, string c){
            name=n;
            id=i;
            course=c;
         }
};

int main(){
   student s1= student("vishal",1,"MECH")
   s1.introduce();
   student s2= student("saurav",1,"MSE")
   s2.introduce();
   student s3= student("arif",1,"DIPLOMA")
   s3.introduce();