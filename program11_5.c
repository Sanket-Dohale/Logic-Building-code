#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0 , iOdd = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
          iEven = iEven + iDigit;
        }

        else
        {
           iOdd = iOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    return iEven - iOdd;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  iRet = CountDiff(iValue);

  printf("Difference is : %d",iRet);


    return 0;
}