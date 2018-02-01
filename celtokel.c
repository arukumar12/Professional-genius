#include <stdio.h>

int main()
{
    float t,r;
    printf("Enter the temperature (Celcius):");
    scanf("%f",&t);
    r=t+273.15;
    printf("The temperature in Kelvin: %f K",r);
    return 0;
}
