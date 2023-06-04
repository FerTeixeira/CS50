#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float valor;
    int total;
    int cent = 25;
    int totalcent = 0;
    int centavos;
    do
    {
        valor = get_float("Troca devida: $");
        centavos = round(valor * 100);
        total = centavos;
        while (total >= cent)
        {
            total -= cent;
            totalcent ++;
        }
        cent = 10;
         while (total >= cent)
        {
            total -= cent;
            totalcent ++;
        }
        cent = 5;
         while (total >= cent)
        {
            total -= cent;
            totalcent ++;
        }
        cent = 1;
         while (total >= cent)
        {
            total -= cent;
            totalcent ++;
        }
    }
    while (valor < 0); 
    printf("%i\n", totalcent);
}