#include<stdio.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMul = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
      iMul = iNo * iCnt;
      printf("%d\t",iMul);
    }
}

int main()
{
  int iValue = 0;
  printf("Enter Number : \n");
  scanf("%d",&iValue);

  Table(iValue);

    return 0;
}