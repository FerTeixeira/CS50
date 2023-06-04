#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int ni;
    int nf;
    do
    {
        ni = get_int("Start size: ");
    }
    while (ni < 9);
    do
    {
        nf = get_int("End size: ");
    }
    while (nf < ni);
    int y = 0;
    for (int i = ni; i < nf; y++)
    {
        i = i + i / 3 - i / 4;
    }
    printf("Years: %i\n", y);
} 