//Input : 7
//Output : 2 4 6 8 10 12 14

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t" , iCnt * 2);
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

