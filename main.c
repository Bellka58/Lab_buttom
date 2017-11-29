#include <plib.h>

int fled(int x)
{ 
	int i, number;
	for ( i=0; i , x; i++)
		{ number = 7 -i;
		PORTE = 1 << number;
}}
     

int main()
{
  int n = 1;
  int flag1=0,flag2=0;
  TRISE = 0;
  TRISD = 1 << 5;

  while(1)
   {
    flag1 = flag2;
    if(PORTD & (1<<5))
     {
      flag2 = 1;
      fled(n);
      if (n == 6) n = 1;
      }
     else flag2 = 0;
    if ((flag1 == 1) && (flag2 == 0)) 
      n = n + 1;
   }
