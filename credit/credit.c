#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long numeroatual;
    long numero;
    long divisor = 10;
    int soma1 = 0, soma2 = 0, somatotal = 0, cont = 0;
    do
    {
        numero = get_long("Número: ");
    }
    while (numero <= 0);
    
    numeroatual = numero;
    while (numeroatual > 0)
    {
        int ultimodigito = numeroatual % 10;
        soma1 = soma1 + ultimodigito;
        numeroatual = numeroatual / 100;
    }
    numeroatual = numero / 10;
    while (numeroatual > 0)    
    {
        int ultimodigito = numeroatual % 10;
        int mult = ultimodigito * 2;
        soma2 = soma2 + (mult % 10) + (mult / 10);
        numeroatual = numeroatual / 100;
    }
    
    somatotal = soma1 + soma2;
    
    numeroatual = numero;
    while (numeroatual != 0)
    {
        numeroatual = numeroatual / 10;
        cont++;
    }
    
    for (int i = 0; i < cont - 2; i++)
    {
        divisor = divisor * 10;
    }
    
    int primeirodigito = numero / divisor;
    int doisprimeiros = numero / (divisor / 10);
    
    if (somatotal % 10 == 0)
    {
        if (primeirodigito == 4 && (cont == 13 || cont == 16))
        {
            printf("VISA\n");
        }
        else if ((doisprimeiros == 34 || doisprimeiros == 37) && cont == 15)
        {
            printf("AMEX\n");
        }
        else if ((doisprimeiros >= 51 && doisprimeiros <= 55) && cont == 16)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}