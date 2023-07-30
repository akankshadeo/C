/*Write a program which accepts the marks and displays the past
0 - 34 - fail
35 - 49 - pass class
50 - 59 - second class
60 - 74 - first class
75 - 100 - first class with distinction
>100 - bapacha college aahe ka? */

#include<stdio.h>      //for printf and scanf

/*
Function name : DisplayClass
Input : Float
Output : Statement
Description : Check the class of percentage
Author : Akanksha Vinay Deo
Date : 25/04/23
*/

void DisplayClass (float fMarks)
{
    if((fMarks< 0.00f) || (fMarks> 100.00f))  //Filter
    {
        printf("Invalid Input \n");
        printf ("Please enter the marks between range 1 to 100");
        return;
    }
    if ((0.0f < fMarks) && (fMarks < 35.00f))  {
        printf("Fail\n");
    }
    else if ((35.00f <= fMarks) && (fMarks < 50.00f))  {
        printf("Pass Class\n");
    }
    else if ((50.00f <= fMarks) && (fMarks < 60.00f))  {
        printf("Second Class\n");
    }
    else if ((60.00f <= fMarks) && (fMarks < 75.00f))  {
        printf("First Class\n");
    }
    else if ((75.00f <= fMarks) && (fMarks <= 100.00f))  {
        printf("First Class with distinction. \n");
    }
}

////////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;

    printf("Please enter your percentage: \n");
    scanf ("%f", &fValue);

    DisplayClass (fValue);
    return 0;
}
