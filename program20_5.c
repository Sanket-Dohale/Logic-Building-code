#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iLength , int iNo)
{
    int i = 0 , iCounter = 0;

    for(i = 0; i < iLength; i++)
    {
       if(Arr[i] == iNo)
       {
         iCounter++;
       }
    }

    return iCounter;

}

int main()
{
    int iSize = 0 , iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    p = (int *)malloc(sizeof(int));

    if(p == NULL)
    {
        printf("Unsble to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p , iSize , iValue);

    printf("Frequency of %d is : %d\n",iValue,iRet);


    return 0;
}