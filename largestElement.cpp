#include<bits/stdc++.h>
using namespace std;
//Brute force solutin
int largest_element(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    return arr[n-1];
}
//Optimal solution
int largestElement(vector<int>&arr , int n){
    int largest = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    vector<int> arr  = {3,2,1,5,2};
    int n = arr.size();
    int ans = largestElement(arr,n);
    cout<<ans;
    int ans2 = largest_element(arr,n);
    cout<<ans2;
      return 0;
}