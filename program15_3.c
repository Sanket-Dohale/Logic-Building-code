#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    char Ch = '\0';

    for(i = 1; i <=iRow; i++)
    {
        for(j = 1 , Ch = 'a'; j <= iCol; j++ , Ch++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",j);
            }

            else
            {
                printf("%c\t",Ch);
                
            }
        }

        printf("\n");
    }
}

int main()
{
   int iValue1 = 0;
   int iValue2 = 0;

   printf("Enter number of rows: \n");
   scanf("%d",&iValue1);

   printf("Enter number of Columns : \n");
   scanf("%d",&iValue2);

   Pattern(iValue1 , iValue2);

    return 0;
}