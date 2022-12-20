//Program to Perform Ecryption and Decryption using Ceaser Cipher
//Date 19 sept
#include<stdio.h>
int main()
{
    char message[100], ch;
    int i, key;
    printf("Enter the message to Encrypt ");
    gets(message);
    printf("Enter key");
    scanf("%d", &key);
    for ( i = 0; message[i]!='\0'; i++)
    {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            message[i] = ch;
        }
        else if(ch>='A' && ch <= 'Z'){
            ch = ch+ key;
            message[i] = ch;
        }
    }
    printf("Encrypted Message: %s", message);
    for ( i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - key;
            if ((ch<'a'))
            {
                ch = ch + 'z' -'a' + 1;
            }
            message[i] = ch;
        }
        else if(ch>='A' && ch <= 'Z'){
          ch = ch - key;
            if ((ch<'A'))
            {
                ch = ch + 'Z' -'A' + 1;
            }
            message[i] = ch;
        }
    }
    printf("\n Decrypted message: %s", message);
    return 0;
}
