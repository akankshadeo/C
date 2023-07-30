//Check if char is present in a string

#include<stdio.h>
#include<stdbool.h>

bool strCheckCharX(char str[], char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        else
        {
            return false;
        }
        str++;
    }
}


int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the char you want to check : \n");
    scanf(" %c", &cValue);

    bRet = strCheckCharX(Arr, cValue);

    if (bRet == true)
    {
      printf("%c is present: %d\n", cValue);
    }
    else
    {
        printf("%c is not present.\n", cValue);
    }

    return 0;
}


