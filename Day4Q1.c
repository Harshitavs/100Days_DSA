#include<stdio.h>
void Reverse_Array(int A[], int n){
int left = 0;int right = n-1;
while (left<right){
    int temp = A[left];
    A[left]=A[right];
    A[right]=temp;

    left ++;
    right --;
}
}
 int main () {
    int size;
    printf("Enter the no of elements in array:");
    scanf("%d",&size);
    int A[size];
    printf("enter the elemens of array:\n");
    for (int i = 0;i<size;i++){
        scanf("%d",&A[i]);
    }
Reverse_Array(A, size);
printf("Reversed array is:\n");
for(int i =0; i<size;i++){
    printf(" %d ",A[i]);
}
return 0;
}