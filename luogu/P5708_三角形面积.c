#include <stdio.h>
#include <math.h>
int main(){
int a,b,c;
double p,s;
scanf("%d %d %d",&a,&b,&c);
p = 0.5*(a+b+c);
s = sqrt(p*(p-a)*(p-b)*(p-c));
printf("%.1lf",s);
return 0;
}