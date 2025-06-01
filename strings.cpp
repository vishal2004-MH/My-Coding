#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char c1[] = "Vishal";
    char c2[] = "Shinde";

    cout <<"concatenation: "<<strcat(c1,c2);

    cout <<"\ncopy:"<<strcpy(c1,c2);

    cout <<strlen(c1);

     return 0;
}