#include<stdio.h>

double CircleArea(float fRadius)
{
    const float fPI = 3.14;
    float fArea = 0.0;

    fArea = fPI * fRadius * fRadius;

    return fArea;
}

int main()
{
  float fValue = 0.0;
  float fRet = 0.0;

  printf("Enter radius : \n");
  scanf("%f",&fValue);

  fRet = CircleArea(fValue);

  printf("Area of circle is %g",fRet);

    return 0;
}