// Find and replace capital letter with small case and viceversa

#include<stdio.h>

void StrtoggleX(char *str)
{
    int Gap = 'a' - 'A'

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - Gap;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + Gap;
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    StrtoggleX(Arr);

    printf("String after editing is : %s\n", Arr);

    return 0;
}
