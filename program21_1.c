#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Cheack(int Arr[] , int iLength , int iNo)
{
  int i = 0;
  bool bFlag = false;
 

  for(i = 0; i < iLength; i++)
  {
    if((Arr[i]) == iNo)
    {
      bFlag = true;  
      break; 
    }
  }

  return bFlag;
}

int main()
{
  int iSize = 0 , iRet = 0 , iCnt = 0, iValue = 0;
  int *p = NULL;
  bool bRet = false;

  printf("Enter number of elements : \n");
  scanf("%d",&iSize);

  printf("Enter the number : \n");
  scanf("%d",&iValue);

  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }

  printf("Enter %d elements\n",iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element : %d\n",iCnt + 1);
    scanf("%d",&p[iCnt]);

  }

  bRet = Cheack(p , iSize, iValue);
  
  if(bRet == true)
  {
    printf("Number is present : \n");
  }
  else
  {
    printf("Number is not present\n");
  }

  free(p);

    return 0;
}