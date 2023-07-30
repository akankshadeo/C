//Return average of digits

#include<stdio.h>

float DigitsAverage(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int Sum = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        Sum = iDigit + Sum;
        iCnt++;
        iNo = iNo / 10;
    }
   return (float) ((float)Sum/(float)iCnt);   //typecasting (imp)
}

int main()
{
    int iValue = 0;
    float fRet = 0.0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    fRet = DigitsAverage(iValue);
    printf("The average of digits is %f", fRet);

    return 0;
}
