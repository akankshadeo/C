// Display "Jay Ganesh" 5 times on screen

#include<stdio.h>

void Display (int iNo)
{
    int iCnt = 0;

    if (iNo < 0)      //Filter - Inside filter u have to write return
    {
        printf("Please enter positive number \n");
        return;
    }
    for (iCnt = 0; iCnt < iNo; iCnt++) {
        printf ("Jay Ganesh...\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number frequency: \n");
    scanf ("%d", &iValue);

    Display(iValue);
    return 0;
}

