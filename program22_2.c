#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[] , int iLength)
{
    int i = 0 , iMin = Arr[i];

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    return iMin;
}

int main()
{
  int iSize = 0 ,iRet = 0 , iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements : \n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }

  printf("Enter %d Element\n",iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter Element : %d\n",iCnt + 1);
    scanf("%d",&p[iCnt]);
  }

  iRet = Minimum(p , iSize);

  printf("Smallest number is : %d\n",iRet);

  free(p);

    return 0;
}