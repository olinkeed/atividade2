#include <iostream>
#define num 5 // global.
int trocarvalor(int num)
{
    if (num > 0)
        num = -3;
}

int main()
{
    std::cout << trocarvalor(num);

    return 0;
}