#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    if(iNo < 0)
    {
        printf("Please enter valid Distance\n");
        exit(0);
    }

    iMeter = iNo * 1000;

    return iMeter; 
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter distance : \n");
  scanf("%d",&iValue);

  iRet = KMtoMeter(iValue);

  printf("%dkm in meter is : %dm\n",iValue,iRet);


    return 0;
}