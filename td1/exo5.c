#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int h;
int m=0;
int s=0;
int tpses;

scanf("%d",&tpses);
				//tpses = 4600;
h = tpses/3600;
m = (tpses-(h*3600))/60;
s = (tpses-(h*3600)-(m*60));

printf("%d secondes correspond à %d heure %d minute %d seconde",tpses,h,m,s);
	
return 0;
}
