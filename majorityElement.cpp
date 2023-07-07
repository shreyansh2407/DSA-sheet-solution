#include<bits/stdc++.h>
using namespace std;
//brute force solution
int majority(vector<int> &arr ,int n){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            return arr[i];
        }
    }
    return -1;
}
//better solution
int majorityHashing(vector<int>&arr,int n){
    map<int,int> mpp;
    for(int i =0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>arr.size()/2){
            return it.first;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {2,2,1,3,3,2,2};
    int n = 7;
    int ans = majorityHashing(arr,n);
    cout<<ans;
      return 0;
}