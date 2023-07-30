//Compare two strings

#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{
    for (;((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2)); str1++, str2++ );    //for 'for loop' wwithout body ; is imp

    return ((*str1 == '\0') && (*str2 == '\0'));

}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter first string: ");
    scanf("%[^'\n']s", Arr);

    printf("Enter second string: ");
    scanf(" %[^'\n']s", Brr);

    bRet = strcmpX(Arr,Brr);

    if (bRet == true)
    {
        printf("Both strings are identical.");
    }
    else
    {
        printf("Both strings are different.");
    }
}

