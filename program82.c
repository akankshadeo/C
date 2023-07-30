//Input : 7
//Output : * * * * * * *

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
        printf("%d\t", iCnt);
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
