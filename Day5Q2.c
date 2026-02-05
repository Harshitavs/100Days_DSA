#include<stdio.h>
    void merge(int* nums1 , int m , int* nums2 , int n ){
int p1 = m -1;
int   p2 =n-1;
int p = m+n -1;

while (p1>= 0 && p2 >= 0) {
    if (nums1[p1]> nums2[p2]) {
        nums1[p] = nums1[p1];
        p1-- ;
    } else {
        nums1[p] = nums2[p2];
        p2--;
    }
p-- ;
}
while (p2 >= 0) {
    nums1[p] = nums2[p2];
    p2--;
    p--;
}
}

int main () {
    int m ,n;

    printf("Enter size of nums1 (m)" ) ;
    scanf("%d" , &m);
    printf("Enter size of nums2 9n0 :");
    scanf("%d",&n);

    int nums1[m+n];
    int nums2[n];

    printf("Enter %d elements of m=nums1 (sorted):\n" ,m);
    for (int i =0;i<m ; i++) {
        scanf("%d" ,&nums1[i]);
    }
    for (int i = m;i<m+n ; i++){
        nums1[i] = 0;
    }
    printf("Enter %d elements of nums2 (sorted):\n" , n);
    for (int i = 0;i<n;i++) {
        scanf("%d" , &nums2[i]);
    }

   merge (nums1 , m , nums2 , n);

   printf("Merged array :\n");
   for(int i = 0; i< m +n ; i++){
    printf("%d  ",nums1[i]);
   }
    printf("\n");
    return  0 ;
   }


