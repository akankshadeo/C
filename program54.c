// Accept number from user and print the smallest number
//sir program

#include<stdio.h>

int SmallestDigit (int iNo)
{
    int iDigit = 0;
    int iMin = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = SmallestDigit(iValue);
    printf("The smallest digit is %d", iRet);

    return 0;
}



