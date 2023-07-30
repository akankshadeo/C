// Display ASCII table

#include<stdio.h>

void DisplayASCII()
{
    int ch = 0;

    for (ch = 0; ch < 127; ch++)
    {
        printf("%c\t%d\n",ch,ch);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
