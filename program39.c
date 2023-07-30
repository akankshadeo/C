//Sum of digits

#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}



int main()
{
    int ivalue =0, iRet = 0;
    printf("Enter number : \n");
    scanf("%d", &ivalue);

    iRet = SumDigits(ivalue);
    printf("Sum of Digits are : %d\n", iRet);

    return 0;
}

