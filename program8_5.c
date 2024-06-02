#include<stdio.h>

double SquareMeter(int iValue)
{
    double Sfeet = 0.0;

    Sfeet = iValue * 0.092903;

    return Sfeet;
}

int main()
{
   int iValue = 0;
   double dRet = 0.0;

   printf("Enter area in square feet : \n");
   scanf("%d",&iValue);

   dRet = SquareMeter(iValue);

   printf("Area in square meter is : %f",dRet);


    return 0;
}