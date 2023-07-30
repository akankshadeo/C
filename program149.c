// Copy small case data from one string to other

#include<stdio.h>

void strcpyx(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
    }

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    strcpyx(Arr,Brr);

    printf("String after copy is : %s\n", Brr);

    return 0;
}
