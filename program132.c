//Find the number of capital case chars

#include<stdio.h>

int strDigitsX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
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

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strDigitsX(Arr);

    printf("Count of digits is : %d\n", iRet);

    return 0;
}


