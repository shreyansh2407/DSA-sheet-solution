#include<bits/stdc++.h>
using namespace std;
//brute force approach
int lowerBound(vector<int> &arr,int x){
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=x) return i;
    }
    return arr.size()+1;
}
int lowerBound(vector<int> &arr,int x){
    int low = 0;
    int high  =  arr.size()-1;
    int ans = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x) {
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {1,2,3,3,7,8,9,9,9,11};
    int x = 8;
    int ans = lowerBound(arr,x);
    cout<<ans;
  return 0;
}