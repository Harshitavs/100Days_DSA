#include<stdio.h>
int maxProfit(int* prices, int pricesSize) {
   int minPrice = prices[0];
   int maxProfit = 0;
   for (int i = 1;i<pricesSize; i++) {
    if(prices[i]-minPrice > maxProfit){
        maxProfit = prices[i]-minPrice;
    }
    if(prices[i] < minPrice) {
        minPrice = prices[i];
    }
   }
   return maxProfit;
}
int main() {
    int n;
    scanf("%d", &n);
    int prices[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    
    int result = maxProfit(prices, n);
    printf("%d\n", result);
    
    return 0;
}