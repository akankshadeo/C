// Accept number from user and print the smallest number
//my program

#include<stdio.h>

int SmallestDigit (int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int iSmallest = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSmallest = iSmallest < iDigit;
        iCnt++;
        iNo = iNo / 10;
    }
    return iSmallest;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = SmallestDigit(iValue);
    printf("Th/e smallest digit is %d", iRet);

    return 0;
}


