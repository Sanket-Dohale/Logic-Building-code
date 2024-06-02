#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
          { 
            iCnt ++;
          }

       iNo = iNo / 10;   
    }

    return iCnt;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  iRet = Count(iValue);

  printf("There are %d digits which are less than 6\n",iRet);

    return 0;
}