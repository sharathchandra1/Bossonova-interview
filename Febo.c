#include <stdio.h>
// creating a function for fibonacci series in recursive form
int fibonacciRec(int m)
{

//fibonacci equation
    if (m <= 1)
       return m;
    return fibonacciRec(m-1) + fibonacciRec(m-2);
}
// creating a function for fibonacci series in interative form
int fibonacci(int n)
{
    int f[n+1];
    int i;
//defining initial values
    f[0] = 0;
    f[1] = 1;
//fibonacci equation
    for (i = 2; i<= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}
// creating a function for fibonacci series in optimized method
int fibonacciopt(int o) 
{ 
  int f0 = 0, f1 = 1, fr, i; 
  if( o == 0) 
    return f0; 
  for (i = 2; i <= o; i++) 
  { 
     fr = f0 + f1; 
     f0 = f1; 
     f1 = fr;
  } 
  return f1; 
}
//call back function fibonacci(required nth value)
int main ()
{
    int i;
    printf("Enter required nth number in fibonacci sequence: ");
    scanf("%d", &i);
    printf("Required nth value in fibonacci sequence is %d", i);
    printf("\n value obtained using iterative method is %d", fibonacci(i));
    printf("\n value obtained using recursive method is %d", fibonacciRec(i));
    printf("\n value obtained using optimised code is %d", fibonacciopt(i));
           return 0;
}
