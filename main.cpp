#include "mbed.h"
#include <cstdio>

int max_value = 10;


int fib(int n){
    if(n == 0  || n == 1){
        printf("*");
        return n;
    }
    else {
    printf("(%d), (%d)", n-1, n-2);
        return (fib(n-1) + fib(n-2));
    }
}

int main()
{
    printf("lab 2 about to start!! \r\n");
    printf("series is: ");
   for (int i=0; i<max_value; i++){
    printf("%d, ", fib(i));
   }
    printf("\r\n");

   while (true) {
 
   
    }
}
