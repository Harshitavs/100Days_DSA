//Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.
#include<stdio.h> 
void removeDuplicate(int A[],int n) {
if (n==0)
 return ;

 int j = 0;
 for (int i = 1;i<n;i++){ 
    if(A[i] != A[j]) {
        j++;
        A[j] = A[i] ;
    }
    }
for (int k = 0;k<= j ; k++){
    printf("%d ",A[k]);
} 
printf("\n");
}

int main (){
    int n;
    printf("Enter the number of elements in the arrray :");
    scanf("%d",&n);
    int A[n] ;
    printf("Enter the elements in the array :");
    for (int  i =0;i<n;i++) {
        scanf("%d",&A[i]);
    }
removeDuplicate(A,n);
return 0;
}