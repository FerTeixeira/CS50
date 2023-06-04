#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // Solicita um texto para o usuário
    string text = get_string("Texto: ");
    // Loop para percorrer todo o texto
    float letras = 0;
    float palavras = 1;
    float frases = 0;
    float indice = 0;
    int nivel = 0;
    float ml = 0;
    float mp = 0;
    for(int i = 0, n = strlen(text); i < n; i++)
    {
        //Soma as pontuações para saber quantas frases existem no texto
        if(ispunct(text[i]))
        {
            if (text[i] == '!' || text[i] == '.' || text[i] == '?')
            {
                frases += 1;
            }
        }
        //Soma os espaços para saber a quantidade de palavras
        if(isblank(text[i]))
        {
            palavras += 1;
        }

        // Soma todas as letras do texto
        if(isalnum(text[i]))
        {

            letras += 1;
        }


        
        ml = (letras / palavras) * 100;
        mp = (frases / palavras) * 100;
        indice = (0.0588 * ml) - (0.296 * mp) - 15.8;
        nivel = round(indice);

    }
    if(nivel < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(nivel >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", nivel);
    }

}