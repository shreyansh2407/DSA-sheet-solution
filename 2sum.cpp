#include<bits/stdc++.h>
using namespace std;
//brute force
vector<int> sum2(vector<int> &arr,int target){
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                
                if(arr[i]+arr[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
        
}
//optimal approach
int sum(vector<int> &arr,int target){
    sort(arr.begin(),arr.end());
   

    int left= 0;
    int right = arr.size()-1;
    while(left<right){
        if(arr[left]+arr[right]==target){
            
            return 1;
        }
        else if(arr[left]+arr[right]>target){
            
            right--;
        }
        else {
            left++;
        }
        
    }
    return 0;
}
int main() {
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    // vector<int> ans = sum2(arr,target);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    int ans = sum(arr,target);
    cout<<ans;
    
    
    
      return 0;
}