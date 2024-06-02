#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char cCh = 65;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("%c\t",cCh);
        cCh++;
    }
}

int main()
{
  int iValue = 0;

  printf("Enter number of elements : \n");
  scanf("%d",&iValue);

  Pattern(iValue);

    return 0;
}