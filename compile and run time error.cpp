#include <iostream>

int main(){
    
    //compile time error
    std::cout << "Hello World" << std::endl;
    
    //run time error
    int value = 3*2;
    std::cout << "value : " << value << std::endl;

    return 0;
}