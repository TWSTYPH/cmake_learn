#pragma once
#include <iostream>

using namespace std;

class swap1
{
public:
    void run();
    void printInfo();
    swap1(int aa,int bb){
        this->a = aa;
        this->b = bb;
    }
    
    /* data */
private:
    int a;
    int b;
};

