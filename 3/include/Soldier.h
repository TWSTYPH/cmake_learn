#pragma once
#include <string>
#include "Gun.h"

class Soldier
{

public:
    Soldier(std::string name);
    // ~Soldier();
    void addGun(Gun *ptr_gun);
    void addBulletYoGun(int num);
    bool fire();
private:
    /* data */
    std::string _name; 
    Gun* ptr_gun;

};
