#include<bits/stdc++.h>
using namespace std;
//Better approach
int XORk(vector<int> &arr,int k){
    int count=0;
    for(int i=0;i<arr.size();i++){
        int sum =0;
        for(int j=i;j<arr.size();j++){
            sum^=arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}

//optimal approach
int xork(vector<int> &arr,int k){
    int xr = 0;
    map<int,int> mpp;
    mpp[xr]++;
    int count =0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        xr = xr^arr[i];
        int x = xr^k;
        count+=mpp[x];
        mpp[xr]++;
    }
    return count;
}
int main() {
    vector<int> arr = {4,2,2,6,4};
    int ans = xork(arr,6);
    cout<<ans;
  return 0;
}