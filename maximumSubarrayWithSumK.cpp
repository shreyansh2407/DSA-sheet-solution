#include<bits/stdc++.h>
using namespace std;
int maximum(vector<int> &arr,int target){
    int count=0;
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=i;j<arr.size();j++){
            
            sum+=arr[j];
             if(sum==target){
                count++;
            }
        }
       
    }
    return count;
}
int main() {
    vector<int> arr  = {1,2,3,4,5,-5,5};
    int target = 5;
    int ans = maximum(arr,target);
    cout<<ans;
  return 0;
}