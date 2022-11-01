#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(void) {
float x, q, w, e, a;
printf("Enter x ");
scanf("%f",&x);
if (x>12.5){
q=sqrt(x)-3+(2.5*x);
printf("%f", q);}
else if (x>=0 && x<=12.5){
w=expf(x)+5+cos(0.001*x); 
printf("%f", w);
}
else{
e=pow(x,2);
printf("%f", e);
}
}