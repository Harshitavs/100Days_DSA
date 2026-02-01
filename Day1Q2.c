/**
 * Note: The returned array must be malloced, assume caller calls free().
 
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n , target, j ;
    scanf("%d",&n);

    int *nums = (int*)malloc(n * sizeof(int));
    if(nums == NULL) {
        printf("Memory allocation failed\n");
        return -1;
}
for ( int i = 0 ; i<n;i++){
    scanf("%d", (nums + i));
}
scanf("%d", &target);
for (int i = 0 ; i<n;i++){
    for (int j = i +1 ; j < n ; j++){
    if ( *(nums+ i) + *(nums + j) == target) {
        printf("%d %d", i, j);
        free (nums);
        return 0;
    }
}
}

free(nums);
return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int *nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", nums + i);
    }

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(nums + i) + *(nums + j) == target) {
                printf("%d %d\n", i, j);
                free(nums);
                return 0;
            }
        }
    }

    free(nums);
    return 0;
}