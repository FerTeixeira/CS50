#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char upper;
char lower;

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        for(int i =0, n = strlen(argv[1]); i < n; i++)
        {
            if(!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    int key = atoi(argv[1]);
    string txt = get_string("Plaintext: ");
    printf("Ciphertext: ");
    for(int i = 0, n = strlen(txt); i < n; i++)
    {
        if(isalpha(txt[i]))
        {
            if(isupper(txt[i]))
            {
                upper = (txt[i] - 65 + key) % 26 + 65;
                printf("%c", upper);
            }
             else if (islower(txt[i]))
            {
                lower = (txt[i] - 97 + key) % 26 + 97;
                printf("%c", lower);
            }
        }
        else
        {
            printf("%c", txt[i]);
        }
    }
    printf("\n");
    return 0;
}