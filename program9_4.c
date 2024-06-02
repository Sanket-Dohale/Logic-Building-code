#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0 || iStart > iEnd)
    {
        printf("Invalid Range\n");
        exit(0);
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    printf("\n");
    return iSum;
}

int main()
{
  int iValue1 = 0, iValue2 = 0 , iRet = 0;

  printf("Enter starting point : \n");
  scanf("%d",&iValue1);

  printf("Enter second number : \n");
  scanf("%d",&iValue2);

  iRet = RangeSumEven(iValue1,iValue2);

  printf("Addition of all even number is : %d\n",iRet);

    return 0;
}