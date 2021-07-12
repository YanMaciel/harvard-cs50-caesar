#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ASCII 0 = 48; 0 = 57
// ASCII A = 65; Z = 90
// ASCII a = 97; z = 122

char index_upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};  // Alphabetical index - uppercase
char index_lower[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};  // Alphabetical index - lowercase

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)  // Iterates through argv[1] to validate the key
    {
        if (argv[1][i] < 48 || argv[1][i] > 57) // ASCII 0 = 48; 9 = 57
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]);  // After validating the key, converts it from typer string to type int
    string plain_text = get_string("plaintext: ");  // Gets plaintext from the user
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plain_text); i < n; i++)  // Iterates through plain_text and add key to each character
    {
        if (isalpha(plain_text[i]) == false)
        {
            printf("%c", plain_text[i]);
        }
        if (isupper(plain_text[i]))
        {
            int index_upper_i = (plain_text[i] - 65 + key) % 26;  // ASCII A = 65; Z = 90 -> converting ASCII to alphabetical index
            char cipher_char_upper = index_upper[index_upper_i];  // converting ASCII to alphabetical index
            printf("%c", cipher_char_upper);
        }
        if (islower(plain_text[i]))
        {
            int index_lower_i = (plain_text[i] - 97 + key) % 26;  // ASCII a = 97; z = 122 -> converting ASCII to alphabetical index
            char cipher_char_lower = index_lower[index_lower_i];  // converting ASCII to alphabetical index
            printf("%c", cipher_char_lower);
        }
    }
    printf("\n");
}
