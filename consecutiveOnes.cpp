#include<bits/stdc++.h>
using namespace std;
int maxConsecutive(int arr[],int n){
    int ans = 0;
    int count =0;
    for(int i = 0;i<n;i++){
        
        if(arr[i]==1){
            count++;
        }
        else{
            count = 0;
        }
        ans = max(ans,count);
    }
    return ans;
}
int main() {
    int arr[] = {1,0,1,1,0,1,1,1,1,0};
    int n = 10;
    int ans = maxConsecutive(arr,n);
    cout<<ans;

      return 0;
}