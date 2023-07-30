//Check if string is pallindrome

//Reverse the string

#include<stdio.h>
#include<stdbool.h>

bool ChkPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)   // 100 < 104
    {
        if (*start != *end)
        {
            break;
        }
        start++;
        end--;
    }

    if (start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    bRet = ChkPallindrome(Arr);

    if (bRet == true)
    {
        printf("String is pallindrome. \n", Arr);
    }
    else
    {
        printf("String is not pallindrome. \n", Arr);
    }
}


