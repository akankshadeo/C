//input : 4
//output : ****

#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < ino; iCnt++)
    {
        printf("*\t");
    }

    while(iCnt < ino)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int value = 0;

    printf("Enter number : ");
    scanf("%d",&value);

    Display(value);

    return 0;
}
