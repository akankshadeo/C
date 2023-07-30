#include<stdio.h>      //IO
#include<stdlib.h>      //Memory Management

void Demo (int Arr[], int iLength)
{
    //Step 5 : Perform the operation on array
}

int main()              //Entry point function
{
    int iSize = 0;         //to store size of array
    int *ptr = NULL;    //TO store address of array
    int iCnt = 0;         //loop counter

    //Step 1 : Accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    //Step 2 : Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //Step 3 : Allocate memory dynamically
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

    //Step 4 : Pass the array to function
    Demo(ptr, iSize);    //Demo(400,4)

    //Step 6 : Deallocate the memory of array
    free(ptr);


    return 0;           //return success to OS
}



//void Demo (int *Arr, int iLength)   * = []
