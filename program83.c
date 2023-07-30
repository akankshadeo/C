//Input : 7
//Output : 7 * 6 * 5 * 4 * 3 * 2 * 1 *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t*\t", iCnt);    //digit is decrementing while symbol is fixeds
    }

    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}
