#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength)
{
    int i = 0;

    printf("Even Elements which are divisible by 5 are : \n");
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 5) == 0 && (Arr[i] % 2) == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
 int iSize = 0 , iRet = 0 , iCnt = 0;
 int *p = NULL;

 printf("Enter the number of elements : \n");
 scanf("%d",&iSize);

 p = (int *)malloc(iSize * sizeof(int));

 if(p == NULL)
 {
    printf("Unable to allocate memory");
    return -1;
 }

 printf("Enter %d elements\n",iSize);

 for(iCnt = 0; iCnt < iSize; iCnt++)
 {
    printf("Enter element : %d\n",iCnt + 1);
    scanf("%d",&p[iCnt]);
 }

 Display(p , iSize);

    return 0;
}