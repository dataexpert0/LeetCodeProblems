/*Problema URI1095 do BeeCrowd - Sequência de I = I + 3 com iteração de J = J - 5 com J começando em 60, até terminar em 0*/

#include <stdio.h> 

using namespace std;
 
int main()
{
    int i = 1; 
    int j = 60;
    printf("I=%d J=%d\n", i, j);

    while(j > 0)
    {
        j = j - 5; 
        i = i + 3; 
        
        printf("I=%d J=%d\n", i, j);
    }

    return 0;
}