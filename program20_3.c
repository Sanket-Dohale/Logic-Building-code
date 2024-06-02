#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Cheack(int Arr[] , int iLength)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
          return true;
          break;
        }
    }

    return false;
}

int main()
{
 int iSize = 0, iCnt = 0;
 bool bRet = false;
 int *p = NULL;

 printf("Enter number of elements : \n");
 scanf("%d",&iSize);

 p = (int *)malloc(iSize * sizeof(int));

 if(p == NULL)
 {
    printf("Unable to allocate memory\n");
    return -1;
 }

 printf("Enter %d elements\n",iSize);

 for(iCnt = 0; iCnt < iSize; iCnt++)
 {
    printf("Enter elements : %d\n",iCnt + 1);
    scanf("%d",&p[iCnt]);
 }

 bRet = Cheack(p , iSize);

 if(bRet == true)
 {
    printf("11 is present\n");
 }

 else
 {
    printf("11 is absent\n");
 }

 free(p);

    return 0;
}