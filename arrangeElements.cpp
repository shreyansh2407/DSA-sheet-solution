#include<bits/stdc++.h>
using namespace std;
//Brute force solution
vector<int> arrange(vector<int> &arr){
        vector<int> pos ;
        vector<int> neg;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                neg.push_back(arr[i]);
            }
            else{
                pos.push_back(arr[i]);
            }
        }
        for(int i=0;i<arr.size()/2;i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        return arr;
}

//Optimal approach 
vector<int> arrange(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n,0);
    int posIndex = 0;
    int negIndex =1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            ans[negIndex] = arr[i];
            
            negIndex+=2;
        }
        else{
            ans[posIndex] = arr[i];
            posIndex+=2;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {3,2,1,-3,-2,-1};;
    vector<int> ans = arrange(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
  return 0;
}