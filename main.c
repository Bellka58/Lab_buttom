#include <plib.h>

int fled(int x)
{ 
     switch(x){
      case 1:
        PORTE = 0x08;
        break;
      case 2:
        PORTE = 0x0C;
        break;
      case 3:
        PORTE = 0x0E;
        break;
      case 4:
        PORTE = 0x0F;
        break;
      case 5: 
        PORTE = 0x8F;
        break;
      case 6:
        PORTE = 0xCF;
        break;
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
