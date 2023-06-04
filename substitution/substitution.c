#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: %s KEY\n", argv[0]);
        return 1;
    }

    if(strlen(argv[1])!=26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    int upper[26];
    int lower[26];
    for (int i = 0, n = strlen(argv[1]); i < n; i++)

    {
        if(isupper(argv[1][i])){
            upper[i] = argv[1][i];
            lower[i] = tolower(argv[1][i]);
        }
        else if(islower(argv[1][i])){
            lower[i] = argv[1][i];
            upper[i] = toupper(argv[1][i]);
        }
        else
        {
            printf("The key must only have alphabetic characters.\n");
            return 1;
        }
    }
    for(int i = 0; i < 26; i++ ){
        for(int j = 0; j < 26; j++){
            if (toupper(argv[1][i]) == upper[j] && i != j)
            {
                printf("The key has equal letters.\n");
                return 1;
            }
        }
    }
    string txt = get_string ("plaintext: ");
    for(int i = 0, n = strlen(txt); i < n; i++)
    {
        if(isalpha(txt[i]) && isupper(txt[i]))
        {
            txt[i] = upper[txt[i] - 65 ];
        }
        else if(isalpha(txt[i]) && islower(txt[i]))
        {
            txt[i] = lower[txt[i] - 97 ];
        }
    }
    printf("ciphertext: %s\n", txt );
}
