#include<bits/stdc++.h>
using namespace std;
//brute force solution
int longest(vector<int> &arr,int n,int target){
    vector<int> temp={0};
   int len =0;
    for(int i=0;i<n;i++){
         int sum=0;
        for(int j = i;j<n;j++){
            if(arr[j]<0){
                break;
            }
           sum+=arr[j];
           if(sum==target){
            len = max(len,j-i+1);
           }
            
        }
    }
    
    return len;
}

//better solution
int main() {
    vector<int> arr  = {1,2,0,0,4,3,-3,4,5,6};
    int target=6;
    int n = arr.size();
    int ans = longest(arr,n,target);
    cout<<ans;
      return 0;
}