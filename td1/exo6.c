#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int x,y,c;
scanf("%d",&x);
scanf("%d",&y);
printf("  %d x %d \n",x,y);
c=0;

while(x>=1){
	if(x%2==0){
		x = x/2;
		y = 2*y;
	}
	else{
		x = x-1;
		c = c+y;
		}
	printf("= %d x %d + %d \n",x,y,c);
}
c = c+x*y;
printf("= %d \n",c);

return 0;
}
