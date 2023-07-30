//Get the Sum of array elements

#include<stdio.h>      //IO
#include<stdlib.h>      //Memory Management

int Addition (int Arr[], int iLength)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()              //Entry point function
{
    int iSize = 0;         //to store size of array
    int *ptr = NULL;    //TO store address of array
    int iCnt = 0;         //loop counter
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements: \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are: \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d \n", ptr[iCnt]);
    }

    iRet = Addition(ptr, iSize);
    printf("The addition is %d", iRet);

    free(ptr);


    return 0;           //return success to OS
}

