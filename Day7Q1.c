//Problem: Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.
#include<stdio.h>
int fib(int  n){
    if (n == 0){
        return 0;
    } else if  (n==1){
            return 1;
        } else {
            return fib(n-1)+fib(n-2);
        }
    }
   void printFibonacci(int n) {
    for(int i = 0; i<n;i++){
        printf("%d" , fib(i));
    }
    printf("\n");
   } 
int main () {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    printf("Fibonacci series up to %d terms :\n" , n);
    printFibonacci(n);

    printf("Fibonacci number at position %d is %d\n" , n , fib(n));
    return 0;
}