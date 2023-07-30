//Write a program which checks whether number is even or odd

#include<stdio.h>      //for printf and scanf
#include<stdbool.h>    //for bool data type

/*
Function name : CheckEvenOdd
Input : Integer
Output : Boolean
Description : Find if the number is even or odd
Author : Akanksha Vinay Deo
Date : 25/04/23
*/


bool CheckEvenOdd (int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }


}
////////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;          // variable to accept input
    bool bRet = false;     //variable to accept return value / false is default value of bool

    printf("Please enter number to check whether it is even or odd : \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);      //Function call

    if (bRet == true) {
        printf("%d is Even number. \n", iValue);
    }
    else{
        printf("%d is Odd number. \n", iValue);
    }

    return 0;
}
