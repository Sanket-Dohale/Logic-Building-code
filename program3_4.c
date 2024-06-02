#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 65 && cValue <= 90)
    {
        cValue = cValue + 32;
        printf("%c",cValue);
    }

    else if(cValue >= 97 && cValue <= 122)
    {
        cValue = cValue - 32;
        printf("%c",cValue);
    }

    else
    {
        printf("Please enter only characters...");
    }
}
int main()
{
   char cValue = 0;

   printf("Enter Character : \n");
   scanf("%c",&cValue);

   DisplayConvert(cValue);

    return 0;
}