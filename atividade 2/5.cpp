#include <iostream>

int calculararea(double comprimento, double largura);
int calculararea(double comprimento, double largura)
{

    std::cin >> comprimento >> largura;
    int b = 0;
    b = largura * comprimento;
    return b;
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << calculararea(a, b) << std::endl;
    return 0;
}