#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[] , int iLength , int iNo)
{
    int i = 0 , iOcc = -1;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iOcc = i;
        }
    }
   
   return iOcc;
   
}

int main()
{
  int iSize = 0 , iRet = 0 , iCnt = 0, iValue = 0;
  int *p = NULL;

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

iRet = LastOcc(p , iSize , iValue);

if(iRet == -1)
{
    printf("There is no such number \n");
}

else
{
    printf("Last occurence of number is %d\n",iRet);
}

free(p);

    return 0;
}