#include <stdio.h>

int missingNum(int arr[], int n) {
    long long Sum_ofterms, actualSum = 0;
    long long total = n + 1;  // total numbers from 1 to n+1
    Sum_ofterms = total * (total + 1) / 2;

    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    return (int)(Sum_ofterms - actualSum);
}

int main() {
    // Example input: missing number from 1 to 5, array has 4 elements 
   int size;
   printf("Enter the no of elements in array :");
   scanf("%d", &size);
    printf("Enter the elements  of the array:\n");
    
    int arr[size];
    for (int i = 0;i<size;i++) {
    scanf("%d",&arr[i]);
   }

    int n = sizeof(arr) / sizeof(arr[0]);  // n = 4, but range is 1 to 5

    int result = missingNum(arr, n);
    printf("Missing number: %d\n", result);

    return 0;
}