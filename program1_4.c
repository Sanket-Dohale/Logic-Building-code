#include<stdio.h>
#include<stdbool.h>

bool Cheack(int iNo)
{
    if((iNo % 5 )==0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
 int iValue = 0;
 bool bRet = false;

 printf("Enter Number : \n");
 scanf("%d",&iValue);

 bRet = Cheack(iValue);

 if(bRet == true)
 {
    printf("Number is divisible by 5\n");
 }

 else
 {
    printf("Number is not divisible by 5\n");
 }



    return 0;
}