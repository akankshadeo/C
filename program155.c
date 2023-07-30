// Copy string one into another by adding it

#include<stdio.h>

//1. travel till end of dest
//2. copy the data from src to dest
//3. write '\0' at the end of dest

void strNcatX(char *src, char *dest, int iLength)
{
    //1
    while(*dest != '\0')
    {
        dest++;
    }

    *dest = ' ';
    dest++;               //adds space after brr

    //2
    while(*src != '\0' && iLength != 0)
    {
        *dest = *src;
        dest++;
        src++;
        iLength--;
    }

    //3
    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20];
    int iValue = 0;

    printf("Enter the first string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the second string : \n");
    scanf("%[^'\n']s", Brr);

    printf("Enter the number of char you want to concat : \n");
    scanf("%d", iValue);

    strNcatX(Arr,Brr, iValue);

    printf("String after copy is : %s\n", Brr);

    return 0;
}
