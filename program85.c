//Input : 7
//Output : a b c d e f g

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    if (iNo < 0)
    {
        iNo = -iNo;
    }
//            1                   2             3
    for (iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
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

