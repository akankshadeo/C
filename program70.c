//Accept elements of array and display smallest n greatest number of array

#include<stdio.h>
#include<stdlib.h>

int MinMax (int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if( iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
        if (iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }

    printf("smallest element is : %d\n", iMin);
    printf("Greatest element is : %d \n", iMax);

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc (iSize * sizeof(int));

    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iSize; iCnt ++)
    {
        scanf ("%d", &ptr[iCnt]);
    }

    printf("Elements of the array are : \n");
    for (iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("%d\n",ptr[iCnt]);
    }


    MinMax(ptr, iSize);

    free (ptr);

    return 0;
}
