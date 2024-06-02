#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0)
    {
        printf("Invalid range\n");
        exit(0);
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}
int main()
{
 int iValue1 = 0 , iValue2 = 0 , iRet = 0;

 printf("Enter staring point : \n");
 scanf("%d",&iValue1);

 printf("Enter ending point : \n");
 scanf("%d",&iValue2);

 iRet = RangeSum(iValue1 , iValue2);

 printf("Addition is : %d\n",iRet);

    return 0;
}