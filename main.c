#include <plib.h>

int main()
{
  int n=0;
  int a=0,b=0;
  TRISE = 0;
  TRISD = 1 << 5;

  while(1)
   {
    b = a;
    if(PORTD & (1<<5))
     {
      a = 1;
      if (n == 0) { PORTE = 1 << 7; }
      if (n == 1) { PORTE = 1 << 7; PORTE = 1 << 6; }
      if (n == 2) { PORTE = 1 << 7; PORTE = 1 << 6; PORTE = 1 << 5; }
      if (n == 3) { PORTE = 1 << 7; PORTE = 1 << 6; PORTE = 1 << 5; PORTE = 1 << 4; }
      if (n == 4) { PORTE = 1 << 7; PORTE = 1 << 6; PORTE = 1 << 5; PORTE = 1 << 4; PORTE = 1 << 3; }
      if (n == 5) { PORTE = 1 << 7; PORTE = 1 << 6; PORTE = 1 << 5; PORTE = 1 << 4; PORTE = 1 << 3; PORTE = 1 << 2; n = -1; }
     }
    else 
      a = 0;
    if ((b == 1) && (a == 0)) 
      n = n + 1;
   }
