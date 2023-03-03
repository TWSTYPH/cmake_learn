#include "Gun.h"
#include "Soldier.h"
#include "iostream"


void test(){
    Soldier threeDuo("sanduo");
    threeDuo.addGun(new Gun("95k"));
    threeDuo.addBulletYoGun(30);
    threeDuo.fire();

}

int main(){
    std::cout << "this is a test .." << std::endl;
     std::cout << "this is a test .." << std::endl;

    test();
    return 0;
}