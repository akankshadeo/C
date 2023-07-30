//Find the number of z occurance

#include<stdio.h>

int strCountcharX(char str[], char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}


int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the char you want to check : \n");
    scanf(" %c", &cValue);

    iRet = strCountcharX(Arr, cValue);

    printf("Count of %c is : %d\n", cValue, iRet);

    return 0;
}


