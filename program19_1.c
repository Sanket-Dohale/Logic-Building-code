#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[] , int iLength)
{
    int i = 0, iEsum = 0, iOsum= 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iEsum = iEsum + Arr[i];
        }

        else
        {
            iOsum = iOsum + Arr[i];
        }
    }

    return iEsum - iOsum;
}

int main()
{
  int iSize = 0, iRet = 0 , iCnt = 0;

  int *p = NULL;

  printf("Enter number of elements : \n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate the memory\n");
    return -1;
  }

  printf("Enter %d elements : \n",iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter elements : %d\n",iCnt + 1);
    scanf("%d",&p[iCnt]);
  }

  iRet = Difference(p , iSize);

  printf("Result is : %d\n",iRet);

  free(p);


    return 0;
}