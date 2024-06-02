#include<stdio.h>

int MulFact(int iNo)

{
    int iCnt = 0;
    int iAns = 1;

    if(iNo <= 0)
    {
      iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
       if((iNo % iCnt)==0)
       {
          iAns = iAns * iCnt;
       }
    }

    return iAns;
}

int main()
{
 int iValue = 0;
 int iRet = 0;

 printf("Enter the number : \n");
 scanf("%d",&iValue);

 iRet = MulFact(iValue);

 printf("%d",iRet);

    return 0;
}