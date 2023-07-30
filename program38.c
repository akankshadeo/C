#include<stdio.h>

int DisplayDigits(int iNo)
{
    int iCnt = 0;

    while (iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}



int main()
{
    int ivalue =0, iRet = 0;
    printf("Enter number : \n");
    scanf("%d", &ivalue);

    iRet = DisplayDigits(ivalue);
    printf("Number of Digits are : %d\n", iRet);

    return 0;
}
