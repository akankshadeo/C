//count digit frequency

//Display digits check if it has 8 in it

#include<stdio.h>

int CountDigitFrequency(int iNo1, int iNo2)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo1 <0)
    {
        iNo1 = -iNo1;
    }
    if((iNo2 < 0) || (iNo2 > 9))
    {
        printf("Enter the digit in range 0 to 9\n");
    }

    while(iNo1 != 0)
    {
        iDigit = iNo1 % 10;
        if(iDigit == iNo2)
        {
            iCnt++;
        }
        iNo1 = iNo1/10;

    }

return iCnt;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue1);
    printf("Enter the digit(0 to 9): \n");
    scanf ("%d", &iValue2);


    iRet = CountDigitFrequency(iValue1, iValue2);
    printf("Frequency of %d is %d in : %d\n", iValue2, iValue1, iRet);
    return 0;
}

