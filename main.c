#include <plib.h>

int fled(int x)
{ 
     PORTE = 1 << x
}
     

int main()
{
  int n = 0;
  int flag1=0,flag2=0;
  TRISE = 0;
  TRISD = 1 << 5;

  while(1)
   {
    flag1 = flag2;
    if(PORTD & (1<<5))
     {
      a = 1;
      switch (n) {
      case 0:
          fled(7);
          break;
      case 1:
          fled(7);
          fled(6);
          break;
      case 2:
          fled(7);
          fled(6);
          fled(5);
          break;
      case 3:
          fled(7);
          fled(6);
          fled(5);
          fled(4);
          break;
      case 4:
          fled(7);
          fled(6);
          fled(5);
          fled(4);
          fled(3);
          break;
      case 5:
          fled(7);
          fled(6);
          fled(5);
          fled(4);
          fled(3);
          fled(2);
          n = -1;
          break;
      default:
          flag2 = 0;
      }
    if ((flag1 == 1) && (flag2 == 0)) 
      n = n + 1;
   }
