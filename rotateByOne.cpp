#include<bits/stdc++.h>
using namespace std;
//optimal approach
void rotate(vector<int> &arr,int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main() {
    vector<int> arr = {1,2,3,4,5};
    int n  = arr.size();
    rotate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      return 0;
}