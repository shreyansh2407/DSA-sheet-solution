#include<bits/stdc++.h>
using namespace std;
//brute force solution
int maxlen(vector<int> &arr){
    int n = arr.size();
    int maxi = 0;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            
            if(sum==0){
                maxi= max(maxi,j-i+1);
            }
        }
    }
    return maxi;
}










//optimal solution
int maxLen(vector<int> &arr){
    unordered_map<int,int> mpp;
    int maxi =0;
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0){
            maxi = i+1;
        }
        else if(mpp.find(sum) != mpp.end()){
            maxi = max(maxi,i-mpp[sum]);
        }
        else{
            mpp[sum] = i;
        }
    }
    return maxi;

}
int main() {
    vector<int> arr = {1,-1,3,2,-2,-8,1,7,10,23};
    int ans = maxlen(arr);
    cout<<ans;
  return 0;
}