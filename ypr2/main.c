#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 
int main (void)
{
int x;
setlocale(LC_CTYPE, "russian");
printf("Enter the number ");
 scanf ("%d", &x);
  switch (x)
   {
    case -1:
printf("З");
break;
    case 1:
printf("В");
break;
    case 2:
printf("Ю");
break;
      default:
            printf( "Wrong");
}
}