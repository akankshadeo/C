//Input : 4 4         Photo frame problems
//Output : *
//         * *
//         * * *
//         * * * *


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    if(iRow != iCol)
    {
        printf("invalid input");
        return;
    }

    for (i = 1; i <= iRow ; i++)
    {
       for (j = 1, ch = 'A'; j <= i; j++, ch++)         //optimized code j <= iCol replaced by j <= i
        {
                printf("%c\t", ch);

        }

        printf("\n");
        printf("\n");


    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of row: \n");
    scanf("%d", &iValue1);
    printf("Enter the number of column: \n");
    scanf("%d", &iValue2);


    Display(iValue1, iValue2);


    return 0;
}

