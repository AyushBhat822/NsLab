#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char message[100], ch;
    char response[5];
    int i, key, op;

    printf("\n\n*Welcome to Ceaser-Cipher Program*\n");
    printf("\nHere Are the Operations which you can perform: \n");
    printf("1. Encrypting a String");
    printf("\n2. Decrypting a String");

    while (response != "No")
    {

        printf("\n\nEnter the number of operation (1 or 2) you want to perform:\n");
        scanf("%d", &op);

        if (op == 1)
        {

            printf("\nEnter a message to encrypt: ");
            scanf("%s", &message);
            printf("\nEnter key (The key must be a number eg.1,2,3...): ");
            scanf("%d", &key);
            
            for (i = 0; message[i] != '\0'; ++i)
            {
                ch = message[i];
                if (ch >= 'a' && ch <= 'z')
                {
                    ch = ch + key;
                    if (ch > 'z')
                    {
                        ch = ch - 'z' + 'a' - 1;
                    }
                    message[i] = ch;
                }
                else if (ch >= 'A' && ch <= 'Z')
                {
                    ch = ch + key;
                    if (ch > 'Z')
                    {
                        ch = ch - 'Z' + 'A' - 1;
                    }
                    message[i] = ch;
                }
            }
            printf("\nEncrypted message: %s", message, "\n");
        }

        if (op == 2)
        {
            printf("\nEnter a message to decrypt: ");
            scanf("%s", &message);
            printf("\nEnter key: ");
            scanf("%d", &key);
            for (i = 0; message[i] != '\0'; ++i)
            {
                ch = message[i];
                if (ch >= 'a' && ch <= 'z')
                {
                    ch = ch - key;
                    if (ch < 'a')
                    {
                        ch = ch + 'z' - 'a' + 1;
                    }
                    message[i] = ch;
                }
                else if (ch >= 'A' && ch <= 'Z')
                {
                    ch = ch - key;
                    if (ch < 'A')
                    {
                        ch = ch + 'Z' - 'A' + 1;
                    }
                    message[i] = ch;
                }
            }
            printf("\nDecrypted message: %s", message);
        }

        printf("\n\nDo you wanna perform again? Yes or No: ");
        scanf("%s", &response);

        if (!strcmp(response,"Yes") || !strcmp(response,"yes"))
        {
            
            continue;
        }

        else
        {
            printf("Wrong Input!");
            exit(0);
        }
    }
}