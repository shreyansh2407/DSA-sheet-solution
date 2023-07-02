#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int target){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
}
int main() {
    int arr[] = {1,2,3,4,5,5};
    int n = 6;
    int ans = linearSearch(arr,n,2);
    cout<<ans;
      return 0;
}