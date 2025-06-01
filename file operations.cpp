#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string myText;

    ifstream MyReadFile("abcd.txt");

    while(getline(MyReadFile,myText))

        cout<<myText;

}