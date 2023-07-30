// To find factors of given number by user

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)      //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   // Program is optimized as o(N) = N/2
    {
        if ((iNo % iCnt) == 0) {
            printf("%d is factor.\n", iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}


// Time Complexity : O(N) : N/2
// Where N is the input

