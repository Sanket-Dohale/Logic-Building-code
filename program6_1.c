#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("%d is small\n",iNo);
    }

    else if(iNo >= 51 && iNo <= 100)
    {
        printf("%d is medium\n",iNo);
    }

    else
    {
        printf("%d is large\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Number(iValue);
}