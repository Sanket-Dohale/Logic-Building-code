#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iDiff1 = 1, iDiff2 = 1 ;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
          iDiff1 = iDiff1 * iCnt;
        }  
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iDiff2 = iDiff2 * iCnt;
        }
    }

    return iDiff1 - iDiff2;



}

int main()
{
   int iValue = 0, iRet = 0;

   printf("Enter number : \n");
   scanf("%d",&iValue);

   iRet = FactorialDiff(iValue);

   printf("Factorial difference is : %d",iRet);

    return 0;
}