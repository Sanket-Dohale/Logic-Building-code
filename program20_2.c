#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
     int i = 0 , iCounter1 = 0, iCounter2 = 0;

     for(i = 0; i < iLength; i++)
     {
        if(Arr[i] % 2 == 0)
        {
            iCounter1++;
        }
        else
        {
            iCounter2++;
        }
     }

     return iCounter1 - iCounter2;


}

int main()
{
 int iSize = 0 , iRet = 0 , iCnt = 0;
 int * p = NULL;

 printf("Enter number of element : \n");
 scanf("%d",&iSize);

 p = (int *)malloc(iSize * sizeof(int));

 if(p == NULL)
 {
    printf("Unsble to allocate memory\n");
    return -1;
 }

 printf("Enter %d elements\n", iSize);

 for(iCnt = 0; iCnt < iSize; iCnt++)
 {
    printf("Enter element : %d\n",iCnt + 1);

    scanf("%d",&p[iCnt]);
 }

 iRet = Frequency(p , iSize);

 printf("Difference between frequency of even and odd number is : %d",iRet);

 free(p);

    return 0;
}