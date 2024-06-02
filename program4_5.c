#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1, iSum2 = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           iSum1 = iSum1 + iCnt;
        }
    }

      for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)!= 0)
        {
           iSum2 = iSum2 + iCnt;
        }
    }

    return iSum1 - iSum2;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  iRet = FactDiff(iValue);

  printf("Difference between summation of its all factors and non factors are : %d\n",iRet);

    return 0;
}