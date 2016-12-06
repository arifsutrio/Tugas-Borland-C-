#include <stdio.h>
#include <conio.h>
void main()
{
	int n,t;
   t=0;
   while(1)
   	{
   	scanf("%i",&n);
   	t=t+n;
   	if(t>=100)
   	break;
   	}
   printf("%i",t);
   getch();
}

