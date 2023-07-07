#include<bits/stdc++.h>
using namespace std;
//Brute force solution
int maxSum(int arr[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<=i;j++){
            sum+=arr[j];
            
        }
        
        maxi = max(sum,maxi);
    }
    return maxi;
}
//Optimal solution  --> Kadane's algorithm
int ans(int arr2[],int n){
    int sum = 0;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr2[i];

        if(sum>maxi){
            maxi = sum;
        }
        if(sum<0){
            sum = 0;
        }

    }
    if(maxi<0){
        return 0;
    }
    return maxi;
   

}
int main() {
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int arr2[] = {-4,-3,-2,-1};
    int n = 4;
    int answer = ans(arr2,n);
    cout<<answer;
  return 0;
}