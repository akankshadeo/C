//Accept characer from user and check whether it is small case alphabet

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("%c is small Character.",cValue);
    }
    else
    {
        printf("%c is not small Character.",cValue);
    }

    return 0;
}
