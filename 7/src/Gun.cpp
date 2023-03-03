#include "Gun.h"
#include <iostream>

void Gun::addBullet(int bullet_num){
    this->bullet_count += bullet_num; 
}

bool Gun::shoot(){
    if (this->bullet_count <= 0)
    {
        std::cout << "There is no bullet!" << std::endl;
        /* code */
        return false;
    }
    else if (this->bullet_count > 0){
        std::cout << "shoot bullet" << std::endl;
        this->bullet_count - 1;
        return true;
    }
    
}