#include<bits/stdc++.h>
using namespace std;
//Brute force for finding an element from pascal triangle
int pascalTriangle(int n,int r){
        int result =1;
        for(int i=0;i<r;i++){
            result = result*(n-i);
            result = result/(i+1);

        }
        return result;
}
//Brute force for printing an entire row
void pascalTri(int n){
    int ans =1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++){
        ans = ans*(n-i);
        ans = ans/i;
        cout<<ans<<" ";
    }
}
//brute force for printing entire pascal triangle
vector<vector<int>> ncr(int n){
    vector<vector<int>> ans = {};
    for(int i=1;i<=n;i++){
        vector<int> temp = {};
        for(int j=1;j<=i;j++){
            temp.push_back(pascalTriangle(i-1,j-1));
            
            
        }
        for(int k=0;k<temp.size();k++){
                cout<<temp[k]<<" ";
            }
        cout<<endl;
        ans.push_back(temp);
        
    }
    return ans;
}
int main() {
    int row = 5;
    int col = 3;

    int ans = pascalTriangle(row-1,col-1);
    cout<<ans;
    
    pascalTri(row-1);
    vector<vector<int>> ans = ncr(row-1);
   
  return 0;
}