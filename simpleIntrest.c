/* Calculation of simple intrest */

#include<stdio.h>

int main(void){
    int p, n;
    float r, si;
    p = 1000;
    n = 3;
    r = 8.5;

    /* formula for simple intrest */
    si = p*n*r/100;
    printf("%f",si);
  return 0;
}