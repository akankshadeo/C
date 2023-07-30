// To find the factorial of a number

#include<stdio.h>

//typedef unsigned long int ULONG

unsigned long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFactorial = 1;

    if (iNo < 0)
    {
       iNo = -iNo;   //Updater
    }

    for (iCnt = iNo; iCnt >=1 ; iCnt--)
    {
        iFactorial = iCnt * iFactorial;
    }
    return iFactorial;
}

int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Result is : %d", iRet);


    return 0;
}
