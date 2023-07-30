//Compare two strings

#include<stdio.h>
#include<stdbool.h>

//str 1 : DeMo
//str 2 : Demo
// returns true (case insensitive)

bool stricmpX(char *str1, char *str2)
{
    while ((*str1 != '\0') && (*str2 != '\0'))
    {
        if (*str1 != *str2)
        {
            if ((*str1 >= 'a') && (*str1 <= 'z'))
            {
                if (*str1 != (*str2 + 32))
                {
                    break;
                }
            }

            else if ((*str1 >= 'A') && (*str1 <= 'Z'))
            {
                if (*str1 != (*str2 - 32))
                 {
                     break;
                 }
            }
            else
            {
                break;
            }
        }
            str1++;
            str2++;
    }

    if ((*str1 == '\0') && (*str2 == '\0'))
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
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter first string: ");
    scanf("%[^'\n']s", Arr);

    printf("Enter second string: ");
    scanf(" %[^'\n']s", Brr);

    bRet = stricmpX(Arr,Brr);

    if (bRet == true)
    {
        printf("Both strings are identical.");
    }
    else
    {
        printf("Both strings are different.");
    }
}
