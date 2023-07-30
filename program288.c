//6859
// 9 5 8 6

#include<stdio.h>

void DisplayR(int ino)
{
    if(ino != 0)
    {
        printf("%d\t",ino%10);
        ino = ino / 10;
        DisplayR(ino);
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
