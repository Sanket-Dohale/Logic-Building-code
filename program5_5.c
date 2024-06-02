#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    for(iCnt = 1; iCnt <= iNo + 1; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
        
    }
}

int main()
{
  int iValue = 0;

  printf("Enter Number : \n");
  scanf("%d",&iValue);

  MultipleDisplay(iValue);

    return 0;
}