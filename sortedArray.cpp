#include<bits/stdc++.h>
using namespace std;
//optimal solution
bool isSorted(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            return 0;
        }
    }
    return 1;
}
int main() {
    vector<int> arr = {1,2,5,3,3,4};
    int n = arr.size();
    if(isSorted(arr,n)){
        cout<<"Sorted";
    }
    else{
        cout<<"Not sorted";
    }
      return 0;
}