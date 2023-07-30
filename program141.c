//Display small and capital case char count

#include<stdio.h>

void Count(char *str)
{
    int iCntA = 0;
    int iCnta = 0;

    while (*str != 0)
    {
    if ((*str >= 'A') && (*str <= 'Z'))
    {
        iCntA++;
    }

    else if((*str >= 'a') && (*str <= 'z'))
    {
        iCnta++;
    }
    str++;

    }

    printf("The frequency of small case char is : %d\n", iCnta);
    printf("The frequency of Capital case char is : %d\n", iCntA);

}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    Count(Arr);

    return 0;
}
