#include<stdio.h>
#include<stdlib.h>
int n;
//overall reducing the time complexity from O(2^n) to O(n)
int fibonaccinum(int n , int dp[]){
  if(n<=1){
    return n;
  }
  else if(dp[n]!=-1){
    return dp[n];
  }
  //storing the computed fibonacci value
  dp[n] = fibonaccinum(n-1, dp)+fibonaccinum(n-2, dp);
  return dp[n];
}
int main(){
  scanf("%d", &n);
  //creating an array to store the fibonacci of n which is already computed aka memoization
  int * dp =(int *) malloc(sizeof(int)*(n+1));
  for(int i =0;i<=n;i++){
    dp[i]= -1;
  }
  int result =  fibonaccinum(n, dp);
  printf("%d", result);
  free(dp);
  return 0;
  
}
