#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 int i, ch;
 char cipher[50], plain[50];
 char key[50];
 int lp;
 while(1)
 {
 printf("\n___Menu___\n");
 printf("1. Data Encryption\n");
 printf("2. Data Decryption\n");
 printf("3. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &ch);
 getchar();
 switch(ch)
 {
 case 1:
 printf("\nData Encryption");
 printf("\nEnter the plain text: ");
 fgets(plain, sizeof(plain), stdin);
 plain[strcspn(plain, "\n")] = 0;
 printf("Enter the encryption key: ");
 fgets(key, sizeof(key), stdin);
 key[strcspn(key, "\n")] = 0;
 lp = strlen(key);
 for(i = 0; plain[i] != '\0'; i++)
 cipher[i] = plain[i] ^ lp;
 cipher[i] = '\0';
 printf("The encrypted text is: ");
 for(i = 0; cipher[i] != '\0'; i++)
 printf("%02x ", (unsigned char)cipher[i]);
 printf("\n");
 break;
 case 2:
 for(i = 0; cipher[i] != '\0'; i++)
 plain[i] = cipher[i] ^ lp;
 plain[i] = '\0';
 printf("Decrypted text is: %s\n", plain);
 break;
 case 3:
 exit(0);
 default:
 printf("Invalid choice. Please try again.\n");
 }
 }
 return 0;
}
