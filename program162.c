//Reverse the string

#include<stdio.h>
#include<stdbool.h>

bool strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)   // 100 < 104
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    strrevX(Arr);

    printf("Reverse string is : %s\n", Arr);
}


//Time complexity : n + n/2

