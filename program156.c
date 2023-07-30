// Copy string in reverse order

#include<stdio.h>

void strcpy(char *src, char *dest)
{

    int iLength = 0;

    while (*src != '\0')
    {
        src++;
        iLength++;
    }

    src--;

    while (iLength != 0)
    {
        *dest = *src;
        src--;
        dest++;
        iLength--;
    }

    //for (; iLength != 0; iLength--)
    //{
        //*dest = *src;
        //src--;
        //dest++;
    //}

    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter number of char u want to copy: ")

    strcpyrevX(Arr,Brr);

    printf("String after copy is : %s\n", Brr);

    return 0;
}
