//Insert an Element in an Array
#include<stdio.h>
int main() {
  int n, pos , x;
  printf("Enter no .of elemments in array\n");
  scanf("%d",&n);
     int A[n+1];
     for(int i = 0; i<n;i++ ){
        printf("Enter element %d\n",i+1);
        scanf("%d",&A[i]);
     }
     printf("Enter the positon where to insert element\n");
     scanf("%d",&pos);
     if (pos < 1 || pos > n+1) {
        printf("Invalid position\n");
        return 0;
     }
     printf("Enter the element to be inserted\n");
     scanf("%d",&x);
     for(int i = n;i>=pos;i--)
    {
        A[i] = A[i-1];
    }
    A[pos-1] = x;
    for (int i=0 ; i <= n;i++) {
        printf("%d",A[i]);
        if(i<n) printf(" " );
    }

     return 0;
}
