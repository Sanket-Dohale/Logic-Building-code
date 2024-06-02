#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   int iCnt = 0;
   int Fact = 1;

   for(iCnt = iNo; iCnt >=1; iCnt--)
   {
     Fact =  iCnt * Fact;   
   }

   return Fact;
}

int main()
{
  int iValue = 0,iRet = 0;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  iRet = Factorial(iValue);
  printf("Factorial of number is : %d\n",iRet);
    return 0;
}