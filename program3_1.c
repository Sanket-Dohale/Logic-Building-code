#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;

    
    for(iCnt = 1; iCnt <= iNo * 2;iCnt++)
    {
        if((iCnt % 2)== 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
 int iValue = 0;

 printf("Enter number : \n");
 scanf("%d",&iValue);

 PrintEven(iValue);

    return 0;
}