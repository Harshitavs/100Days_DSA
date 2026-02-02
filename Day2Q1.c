//Delete an Element from an Array
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n , pos ;
    scanf("%d", &n);
    int A[n];

    for (int i  = 0;i<n;i++) {
        scanf("%d",&A[i]);
    }
    scanf("%d", &pos);

    if(pos<1 || pos>n) {
        printf("Invalid position");
        return 0;
    }
for (int i =pos-1; i<n-1;i++) {
    A[i] = A[i+1];
}
for (int i =0;i<n-1 ; i++) {
    printf("%d",A[i]);
    if(i != n-2) {
        printf(" " );
    
    }
}


    return 0;
}