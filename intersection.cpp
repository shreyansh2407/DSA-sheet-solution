#include<bits/stdc++.h>
using namespace std;
//brute force solution
vector<int>  intersection(vector<int> a,vector<int>b){
    vector<int> ans;
    int i=0;
    int j=0;
    
    int n1= a.size();
    int n2 = b.size();
    while(i<n1 && j<n2){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
           
            i++;
            j++;
        }
        else{
            i++;
        }
    }
   
    return ans;
}
int main() {
    vector<int> a = {1,2,2,3,3,4,5,6};
    vector<int> b = {2,3,3,4,5,6,6};
    vector<int> ans = intersection(a,b);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
      return 0;
}