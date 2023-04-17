#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char nickname[20];
char str1[20] = "Hello World!";
char str2[20] = "Hello W";
char str3[30] = "Welcome to C Programming!";
char str4[30];
char str5[30];
char str6[35] = "I'm an example of function strchr";
int main()
{ system("CLS");
 printf("Enter your nickname: ");
 scanf("%s", &nickname);
 printf("%s\n",nickname);
 puts("Enter your nickname: ");
 scanf("\n");
 gets(nickname);
 puts(nickname);
 printf("Length of string %s = %d\n", str1,strlen(str1));
 if (strcmp(str1,str2) == 0)
 printf("String 1 and String 2 are equal");
 else
 printf("String 1 and String 2 are not equal");
 printf("\n");
 if (strncmp(str1,str2,5) == 0)
 printf("String 1 and String 2 are equal");
 else
 printf("String 1 and String 2 are not equal");
 printf("\n");
 strcat(nickname,str1);
 printf("Value of nickname after concatenation: %s \n", nickname);
 strncat(nickname,str1,3);
 printf("Value of nickname after concatenation: %s \n", nickname);
 strcpy(str4,str3);
 printf("String str4 is %s\n ", str4);
 strncpy(str5,str3,5);
 printf("String str5 is %s\n ", str5);
 printf("%s\n",strchr(str6,'f'));
 printf("%s\n",strrchr(str6,'f'));
 printf("%s\n", strstr(str6,"examp"));
 getch(); return 0;
}

