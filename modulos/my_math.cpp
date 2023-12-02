/* Esse módulo contém funções matemáticas */ 
#include "my_math.h"
// Fatorial
int fatorial(int n)
{
    int fat = 1;

    for (int i = 0; i < n ; i++)
    {
        fat = fat * (i + 1);
    }
    return fat;
}

// Area de um quandrado
int area_quadrado(int lado)
{
    return lado * lado;
}


// area de um retangulo
int area_retangulo(int altura, int base)
{
    return altura * base;
}