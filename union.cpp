#include<bits/stdc++.h>
using namespace std;
//brute force approach
set <int>  unionArray(int arr1[],int arr2[],int n,int m){
    set <int> st;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }
    return st;
}

//optimal solution 
vector<int> unionSorted(vector<int> a, vector<int> b){
    vector<int> ans;
    int n1 = a.size();
    int n2 = b.size();
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
    }
    while(j<n2){
        if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
    }
    return ans;
}
int main() {
    vector<int> arr1 = {1,2,3,4,4,5};
    
    vector<int> arr2 = {2,3,4,5,6};
    // set <int> st = unionArray(arr1,arr2,6,5);
    // for(auto i:st){
    //     cout<<i <<" ";
    // }
    vector<int> ans  = unionSorted(arr1,arr2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    } 
      return 0;
}