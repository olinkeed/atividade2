#include <iostream>
#include <ctime>
int gerarnumeroaleatorio();

int main()
{
    int numero;
    numero = gerarnumeroaleatorio();
    std::cout << "O numero e : " << numero << std::endl;
    return 0;
}
int gerarnumeroaleatorio()
{
    int num;
    srand(time(NULL));
    num = rand() % 100;
    return num;
}