#include<stdio.h>

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

    DisplayR(value);

    printf("End of main\n");

    return 0;
}


