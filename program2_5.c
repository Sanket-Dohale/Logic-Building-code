#include<stdio.h>
#include<stdbool.h>

bool CheackEven(int iNo)
{
    if((iNo % 2)== 0)
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
    bool bRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheackEven(iValue);

    if(bRet == true)
    {
        printf("Number is Even ");
    }

    else 
    {
        printf("Number is odd");
    }

    return 0;
}