//6859
// 9 5 8 6

#include<stdio.h>

void DisplayR(int ino)
{
    int idigit = 0;

    if(ino != 0)
    {
        idigit = ino % 10;
        ino = ino / 10;
        DisplayR(ino);              //Head recursion
        printf("%d\t",idigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}


