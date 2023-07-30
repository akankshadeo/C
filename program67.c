//Accept elements of array and display largest number of array

#include<stdio.h>
#include<stdlib.h>

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


    iRet = Maximum(ptr, iSize);
    printf("The greatest element is : %d", iRet);
    free (ptr);

    return 0;
}
