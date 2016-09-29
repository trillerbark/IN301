#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
float a=0;
scanf("%f",&a);
a = 1.0/((1.0+a)*(1.0+a));
printf("%f \n",a);

return 0;
}
