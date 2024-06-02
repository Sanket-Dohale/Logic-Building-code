#include<stdio.h>
#include<stdlib.h>

int DollerToINR(int iNo)
{
  if(iNo < 0)
  {
    printf("Please enter valid USD\n");
    exit(0);
  }
    
    int iINR = 0;

    iINR = iNo * 70;

    return iINR;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter Number of USD : \n");
  scanf("%d",&iValue);

  iRet = DollerToINR(iValue);

  printf("Value of INR is : %d",iRet);


    return 0;
}