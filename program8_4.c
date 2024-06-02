#include<stdio.h>

float FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}
int main()
{
  float fValue = 0.0;
  double dRet = 0.0;

  printf("Enter tempreature in Fahernhit : \n");
  scanf("%f",&fValue);

  dRet = FhtoCs(fValue);

  printf("Tempreature in celsius is : %f",dRet);
 

    return 0;
}