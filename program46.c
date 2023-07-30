//Display digits check if it has 8 in it

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(int iNo1, int iNo2)
{
    int iDigit = 0;

    if((iNo2 < 0) || (iNo2 > 9))
    {
        printf("Enter the digit in range 0 to 9\n");
        return false;
    }

    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }

    while(iNo1 != 0)
    {
        iDigit = iNo1 % 10;
        printf("%d\n", iDigit);

        if (iDigit == iNo2)
        {
            break;
        }
        iNo1 = iNo1 / 10;
    }

    if (iDigit == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;
    printf("Enter number: \n");
    scanf("%d", &iValue1);
    printf("Enter the digit(0 to 9): \n");
    scanf ("%d", &iValue2);

    bRet = ChkDigit(iValue1, iValue2);
    if(bRet == true)
    {
        printf("Digit %d is present.", iValue2);
    }
    else
    {
        printf("Digit %d is not present.", iValue2);
    }
    return 0;
}

