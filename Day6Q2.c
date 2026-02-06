#include<stdio.h>
 void moveZeros(int* nums ,int n){
    int *write = nums;
    int *read = nums;
 
    for(int i = 0; i < n; i++ , read++){
        if(*read  != 0) {
            *write = *read;
            write++;
        }
    }
    while (write < nums + n) {
        *write = 0;
        write++;
    }
        for (int i = 0; i<n; i++){
            printf("%d ",nums[i]); 
        }
        printf("\n");
    }

    int main () {
        int n;
        printf("Enter the no of elements in array:\n");
        scanf("%d",&n);

        int nums[n];
        
        printf("Enter the elements in array:\n");
        for (int i =0 ;i<n;i++) {
            scanf("%d",&nums[i]);
        }
        moveZeros(nums , n);
        return  0;
    }
 