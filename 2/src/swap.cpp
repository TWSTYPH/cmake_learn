#include "swap.h"

void swap1::run(){
    int temp;
    temp = a;
    a  = b;
    b = temp;
}

void swap1::printInfo(){
    std::cout << "a:"<< a << endl;
    std::cout << "b:"<< b << endl;
}