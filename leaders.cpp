#include<bits/stdc++.h>
using namespace std;
//brute force solution
vector<int> ans(vector<int> &arr){
    vector<int> sol;
        for(int i=0;i<arr.size();i++){
            int count= 0;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]<arr[j]){
                    break;
                }
                else{
                    count++;
                }
            }
            if(count==arr.size()-i-1){
                sol.push_back(arr[i]);
            }
        }
        return sol;
}
//optimal solution
vector<int> leaders(vector<int> &arr){
    vector<int> ans;
    int maxi = INT_MIN;
    int n = arr.size();
    for(int i=n-1;i>=0;i--){
        
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
            
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
    vector<int> arr = {10,22,22,3,0,6};
    vector<int> ans1 = leaders(arr);
    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<" ";
    }
  return 0;
}