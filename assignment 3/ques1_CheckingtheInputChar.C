//This program finds whether a number is Uppercase or Lowercase or digit or any other character

#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Character: ");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("Character Entered is Uppercase");
    }
    else if(a>=97 && a<=122)
    {
        printf("Character Entered is Lowercase");
    }
    else if(a>=48 && a<=57)
    {
        printf("Character Entered is a Digit");
    }
    else
    {
        printf("Any other Character");
    }
    return 0;
}
