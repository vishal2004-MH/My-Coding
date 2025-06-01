#include<iostream>

using namespace std;

class myclass{
    public:
    int a;
    int b;

    myclass(int x, int y){
        a=x;
        b=y;
    }

    void print(){
        cout<<"a:"<<a;
        cout<<"\nb:"<<b;


    }

};

int main(){


    myclass m1(10,20);

    m1.print();

    return 0;
}