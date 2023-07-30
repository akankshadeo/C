// To find the factorial of a number

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFactorial = 1;

    for (iCnt = iNo; iCnt >=1 ; iCnt--)
    {
        iFactorial = iCnt * iFactorial;
    }
    return iFactorial;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Result is : %d", iRet);


    return 0;
}
