#include<stdio.h>
int main( ) 
{ 
      int  n, count = 1; 
      float  x, average, sum = 0; 
      printf("How many Numbers? " ) ; 
      scanf ("%d",&n) ; 
      while (count < n) 
             { 
                  printf ("x = " ) ; 
                  scanf("%f", &x); 
                  sum += x; 
                  ++count; 
             } 
                  average = sum/n; 
                  printf("\nThe Average is %f\n", average); 
                  return 0
} 
