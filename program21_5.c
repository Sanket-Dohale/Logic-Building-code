#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0 , iMul = 1;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 != 0)
        {
           iMul = iMul * Arr[i];
        }
    }

    return iMul;
}

int main()
{
  int iSize = 0 , iRet = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements :\n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
    printf("Unsble to allocate memory\n");
    return -1;
  }

  printf("Enter %d elements\n",iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element : %d\n", iCnt + 1);
    scanf("%d",&p[iCnt]);
  }

  iRet = Product(p , iSize);

  if(iRet == 1)
  {
    iRet = iRet * 0;
  }

  printf("Product is : %d",iRet);

  free(p);


    return 0;
}