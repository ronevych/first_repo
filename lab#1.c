#include <stdio.h>
#include <math.h> 
int main()
{
  double x=4.597;
  double y=7.954;
  printf("%.16f",3.6*pow((sin(x))+cos(pow(y,2)),3)-(tan(sqrt(pow(sin(x), 2)+pow(cos(y), 2)))));
  return 0;
}