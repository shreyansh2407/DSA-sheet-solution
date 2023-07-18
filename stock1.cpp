#include<bits/stdc++.h>
using namespace std;
//brute force solution
int stock(vector<int> &arr){
    int maxProfit = 0;
    for(int i=0;i<arr.size();i++){
        for(int j = i+1; j<arr.size();j++){
            int cost = arr[j]-arr[i];
            maxProfit = max(maxProfit,cost);
        }
    }
    return maxProfit;
}
//optimal approach
int stock(vector<int> &arr){
    int mini  = arr[0];
    int maxProfit = 0;
    for(int i=1;i<arr.size();i++){
        int cost = arr[i] - mini;
        maxProfit = max(maxProfit,cost);
        mini = min(mini,arr[i]);
    }
    return maxProfit;
}
int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int ans = stock(arr);
    cout<<ans;
  return 0;
}