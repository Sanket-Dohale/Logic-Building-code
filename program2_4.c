#include<stdio.h>

void Display(int iNo,int Frequency)
{
    
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(Frequency < 0)
    {
        Frequency = -Frequency;
    }

    for(iCnt = 1; iCnt <= Frequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
   int iValue = 0;
   int iCount = 0;

   printf("Enter number :\n");
   scanf("%d",&iValue);

   printf("Enter frequency : \n");
   scanf("%d",&iCount);

   Display(iValue,iCount);

    return 0;
}