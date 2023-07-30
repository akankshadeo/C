// Check whether given number is a prime number

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for (iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            break;
        }
    }
    if(iCnt == (iNo/2) + 1)    //iCnt at the end becomes 51 if input is 100 and so the given condition
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
   int iValue = 0;
   bool bRet = false;

   printf("Enter the number : \n");
   scanf ("%d", &iValue);

   bRet = CheckPrime(iValue);

   if (bRet == true)
   {
       printf("%d is a prime number \n", iValue);
   }
   else
   {
        printf("%d is not a prime number \n", iValue);

   }


    return 0;
}

// Time complexity is x is number is not prime where x is first factor
// Time complexity is n/2 for the prime number
