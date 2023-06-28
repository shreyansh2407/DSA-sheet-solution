#include<bits/stdc++.h>
using namespace std;
//Brute force solution
int removeDuplicate(int arr[],int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    return st.size();
}
//Optimal solution
int remove_duplicate(int arr[],int n){
    int p =0 ;
    for(int i=1;i<n;i++){
        if(arr[p] !=arr[i]){
            arr[p+1] = arr[i];
            p++;
        }
    }
    return p+1;
}
int main() {
    int arr[]  = {1,1,2,2,2,3,3};
    int n=7;
    
    
    int ans = remove_duplicate(arr,n);
    cout<<ans;
      return 0;
}