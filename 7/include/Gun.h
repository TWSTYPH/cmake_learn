#pragma once
// 防止头文件重复包含
#include <string>

class Gun
{
public:
    Gun(std::string type){
        this->bullet_count = 0;
        this->_type = type;
    }
    void addBullet(int bullet_num);
    bool shoot();

private:
    int bullet_count;
    std::string _type;


};

