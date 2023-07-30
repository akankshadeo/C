//Get the last occurrence of character in a string

#include<stdio.h>
#define ERR_NOTFOUND -1          //macro used

int FirstOccurrence(char *str, char ch)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    iRet = FirstOccurrence(Arr, cValue);

    if (iRet == (ERR_NOTFOUND))
    {
        printf("There is no such character.");
    }
    else
    {
        printf("First occurrence of %c is at : %d\n", cValue, iRet);
    }


    return 0;
}
