//input : 4
//output : ****

#include<stdio.h>

void DisplayI(int ino)         //iteration
{
    int iCnt = 0;

    while(iCnt < ino)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR(int ino)          //recursion
{
    static int iCnt = 0;

    if(iCnt < ino)
    {
        printf("*\t");
        iCnt++;
        DisplayR(ino);             //recursive call
    }
}

int main()
{
    int value = 0;

    printf("Enter number : ");
    scanf("%d",&value);

    DisplayI(value);
    DisplayR(value);

    return 0;
}

