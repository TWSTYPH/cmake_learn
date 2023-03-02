#include "swap.h"

int main(int argc, char **argv)
{

    swap1 myswap(20,30);
    myswap.printInfo();
    myswap.run();
    myswap.printInfo();
    return 0;
}