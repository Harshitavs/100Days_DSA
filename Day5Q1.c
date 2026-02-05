#include<stdio.h>
void merge_logs(int A1[] , int n1 , int A2[], int n2 , int A3[]){
    int i = 0 , j = 0, k = 0;
    while (i < n1  && j< n2)
    {
        if (A1[i] <= A2[j]) {
            A3[k++] = A1[i++];
           
        } else {
         A3[k++] = A2[j++];
         
    }
    
}
while (i < n1){

   A3[k++] = A1[i++];
}
while (j < n2) {
   A3[k++] = A2[j++];
}
}

int main(){
  int n1 , n2;
  printf("Enter number of enteries in A1:");
  scanf("%d",&n1);
  int A1[n1];
  printf("Enter the enteries in A1:");
  for(int i = 0;i<n1;i++){
   scanf("%d",&A1[i]);
  }
  printf("Enter nummber of enteries in A2:");
  scanf("%d",&n2);
  int A2[n2];
  printf("Enter the entries in A2:");
  for(int j = 0;j<n2;j++){
   scanf("%d",&A2[j]);
  }
int A3[n1+n2];
merge_logs(A1 , n1 , A2, n2, A3 );

printf("Merged chronological lof:\n");
for(int i = 0; i< n1 + n2; i++){
   printf("%d",A3[i]);
}
printf("\n");
return 0;
 }
     

