#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr,int n ,int k){
    vector<int> temp  = {0};
    k = k%n;
    //first copying the first k elements
    for(int i = 0;i < k;i++){
        temp[i] = arr[i];
    }
    //shifting the elements
    for(int i = k; i<n;i++){
        arr[i-k] = arr[i];
    }
    //pasting the copied element into original array
    int j = 0;
    for(int i = n-k;i<n;i++){
        arr[i] = temp[j++];
    }
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int n = arr.size();
    rotate(arr,n,3);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      return 0;
}