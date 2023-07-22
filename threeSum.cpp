#include<bits/stdc++.h>
using namespace std;
//Brute force
vector<vector<int>> threeSum1(vector<int> &arr,int n){
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int> > ans(st.begin(),st.end());
    return ans;
}
//Better solution
vector<vector<int>> threeSum(vector<int> &nums,int n){
    set<vector<int>> st;
   for(int i=0;i<nums.size();i++){
            set<int> hashset;
            for(int j=i+1;j<nums.size();j++){
                int third = -(nums[i]+nums[j]);
                if(hashset.find(third)!=hashset.end()){
                    vector<int> temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
    vector<vector<int> > ans(st.begin(),st.end());
    return ans;
}
//Optimal solution
vector<vector<int>> threeSum3(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k = nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j] + nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }

int main() {
    vector<int> arr = {-1,0,1,2,-1,-4};
    int n = arr.size();
    vector<vector<int> > ans = threeSum3(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
  return 0;
}