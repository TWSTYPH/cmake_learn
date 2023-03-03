#include "Soldier.h"

Soldier::Soldier(std::string name){
    this->_name = name;
    this->ptr_gun = nullptr;
}

void Soldier::addGun(Gun *ptr_gun){
    this->ptr_gun = ptr_gun;
}

void Soldier::addBulletYoGun(int num){
    this->ptr_gun->addBullet(num);
}

bool Soldier::fire(){
    return(this->ptr_gun->shoot());
}

// Soldier::~Soldier(){
//     if (this->ptr_gun == nullptr){
//     return ;
//     }

//     delete this->ptr_gun;
//     this->ptr_gun = nullptr;
// }