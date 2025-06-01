#include <iostream>


int main(){

    int value {45};
    std::cout <<"The value is : " <<value << std::endl;
    std::cout << std::endl;
    
    value +=5; //equivalent to value = value + 5
    std::cout << "The value is (after +=5) : " << value << std::endl;
    
    value *=7; //equivalent to value = value * 7
    std::cout << "The value is (after *=7) : " << value << std::endl;
    
    value /=11; //equivalent to value = value / 11
    std::cout << "The value is (after /=11) : " << value << std::endl;
    
    value %=5; //equivalent to value = value % 8
    std::cout << "The value is (after %=5) : " << value << std::endl;
    
    
    return 0;
} 