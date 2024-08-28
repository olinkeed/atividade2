// funções que possuem returno sao puxadas com INT, FLOAT, ETC. Já as sem retorno são denominadas do TIPO VOID.
#include <iostream>
void bom_dia()
{
    std::cout << "bom dia" << std::endl;
}
int aleat(int num)
{
    std::cin >> num;
    return num;
}
int dobro(int x, int num)
{
    x = 2 * num;
}
void mostra_dobro(int)
{
    std::cout << "dobro" << std::endl;
}

int main()
{
    int x, num;

    bom_dia();
    std::cout<<aleat();
    x = aleat();
    num += dobro(x);
    if (dobro(x) > dobro(aleat()))
    {
        mostra_dobro(x);
    }
    return 0;
}