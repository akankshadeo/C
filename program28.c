// Take two inputs from user x and y and give output x raise to y

#include<stdio.h>

int CalculatePower (int iBase, int iPower)
{
    int iCnt = 0;
    int iResult = 1;

    for (iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter base: \n");
    scanf("%d", &iValue1);
    printf("Enter power: \n");
    scanf("%d", &iValue2);

    iRet = CalculatePower(iValue1,iValue2);

    printf("Result is : %d \n", iRet);

    return 0;
}
