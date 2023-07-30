//Input : 3 5
//Output : a a a a a
//         b b b b b
//         3 3 3 3 3


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    int ch = '\0';

    for (i = 1; i <= iRow ; i++)
    {
       for (j = 1, ch = 'a'; j <= iRow ; j++, ch++)
        {
               printf("%c\t", ch);
        }

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


