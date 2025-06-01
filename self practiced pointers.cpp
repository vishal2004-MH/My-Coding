#include<iostream>

using namespace std;

int main(){

   string name = "vishal shinde";

   string *ptr = &name;

   cout<<"value  in variable:"<<name;

   cout<<"\n\n";

   cout <<"Address of variable:"<<"ptr";

   cout <<"\n\n";

   cout<<"Address of variable:"<<&name;


     return 0;
}