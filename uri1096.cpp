/* Caso alternativo do URI 1096 - Sequência IJ 2.*/
/*Tive o palpite em que o loop deveria ser executado com i = i * 3 e parar quando i = 9. Porém o código foi corrigido para i = i + 2*/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int j = 7;

    while (i <= 9)
    {
        for (int j = 7; j >= 5; j--)
        {
            i = i;
            std::cout << "I = " << i << " J = " << j << "\n";
        }
        i = i + 2;
    }

    return 0;
}