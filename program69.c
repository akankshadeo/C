//Accept elements of array and display smallest n greatest number of array

#include<stdio.h>
#include<stdlib.h>

int Minimum (int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if( iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int Maximum (int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if( iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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


    iRet = Minimum(ptr, iSize);
    printf("The smallest element is : %d\n", iRet);

    iRet = Maximum(ptr, iSize);
    printf("The greatest element is : %d\n", iRet);

    free (ptr);

    return 0;
}
