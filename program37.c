#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n", iDigit);
        iNo = iNo / 10;
    }
}



int main()
{
    int ivalue =0;
    printf("Enter number : \n");
    scanf("%d", &ivalue);

    DisplayDigits(ivalue);

    return 0;
}
