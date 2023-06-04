#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n;
    int e = 0;
    int r = 0;
    do
    {
        n = get_int("Qual altura da pirâmide? \n");
        if (n <= 0 || n >= 9)
        {
            
        }
        else 
        {
            for (int i = 0; i < n; i++)
            {
                e = n - 1 - i;
                r = 1 + i;
                for (int j = 0; j < e; j++)
                {
                    printf(" ");
                }
                for (int j = 0; j < r; j++)
                {
                    printf("#");
                }
                printf("  ");
                for (int j = 0; j < r; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
            break;
        }
    }
        
    while (1);
}
