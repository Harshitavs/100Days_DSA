#include<stdio.h>
long long fibonacci (int n) {
    if (n <= 1)
    return n;

    long long a = 0, b =1 , next;
for (int i = 2;i <= n; i++) {
    next  =a+b ;
    a = b;
    b = next;
}
return b ;
}

int main () {
    int n ;
    printf("Enter n :");
    scanf("%d",&n);

    printf("F(%d) = %lld\n", n , fibonacci(n));
    return 0;
}