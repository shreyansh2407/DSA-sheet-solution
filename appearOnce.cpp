#include<bits/stdc++.h>
using namespace std;
//optimal solution
int appearOnce(int arr[],int n){
    int ans =0;

    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    return ans;
}
int main() {
    int arr[] = {1,1,2,3,3};
    int n =5;
    int ans = appearOnce(arr,n);
    cout<<ans;
      return 0;
}