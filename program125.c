//Accept characer from user and check whether it is capital alphabet

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("%c is capital Character.",cValue);
    }
    else
    {
        printf("%c is not capital Character.",cValue);
    }

    return 0;
}
