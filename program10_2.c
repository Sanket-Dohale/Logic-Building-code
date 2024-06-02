#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;
    
    while(iNo != 0)
    {
    iDigit = iNo % 10;

    if(iDigit == 0)
       {
        return true;
        break;
       }   
       iNo = iNo / 10;
    }

      return false;

}

int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  bRet = ChkZero(iValue);

  if(bRet == true)
  {
    printf("it contains zero\n");
  }

  else
  {
    printf("it contains no zero\n");
  }

    return 0;
}