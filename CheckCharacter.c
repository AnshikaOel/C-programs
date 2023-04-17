// check whether entered character is alphabet,number,digit or other character
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("the characte is lower alphabet");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("The character is upper alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("The character is digit");
    }
    else 
    {
        printf("The chracter is neither a alphabet nor a digit");
    }
    return 0;
}
