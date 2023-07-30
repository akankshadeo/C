//Display digits check if it has 8 in it

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);   //dont write return in while loop

        if (iDigit == 8)
        {
            bFlag = true;
            break;
        }
        iNo = iNo / 10;
    }
    return bFlag;

}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    bRet = ChkDigit(iValue);
    if(bRet == true)
    {
        printf("Digit 8 is present.");
    }
    else
    {
        printf("Digit 8 not present.");
    }
    return 0;
}

