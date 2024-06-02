#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

     if(iDigit != 0)
     {
        iMul = iMul * iDigit;
     }
     
        iNo = iNo / 10;

    }

    return iMul;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the number : \n");
  scanf("%d",&iValue);

  iRet = MultDigits(iValue);

  printf("multiplication of all digits is : %d\n",iRet);

    return 0;
}