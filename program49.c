//count digit frequency

//Display digits check if it has 8 in it

#include<stdio.h>

int CountOddDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo <0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 = 0)
        {
            iCnt++;
        }
        iNo = iNo/10;

    }

return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CountOddDigits(iValue);
    printf("Frequency of even digits is : %d\n", iRet);
    return 0;
}

