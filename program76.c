//Accept n numbers from user and another number and return last index if its present in the array

#include<stdio.h>
#include<stdlib.h>

int SearchLastOCuurance (int Arr[], int iLength, int iNo)
{
    int iCnt = iLength;
    int iPos = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (iNo == Arr[iCnt])
        {
            iPos = iCnt;
        }

    }
    return iPos;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc (iSize * sizeof(int));

    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iSize; iCnt ++)
    {
        scanf ("%d", &ptr[iCnt]);
    }

    printf("Enter the element you want to search : \n");
    scanf("%d", &iValue);

    printf("Elements of the array are : \n");
    for (iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("%d\n",ptr[iCnt]);
    }


    iRet = SearchLastOCuurance(ptr, iSize, iValue);
    if (iRet == -1)
    {
        printf("No such element present.\n");
    }
    else
    {
        printf("The %d is present at %d position.", iValue, iRet);
    }

    free (ptr);

    return 0;
}
