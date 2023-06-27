#include<bits/stdc++.h>
using namespace std;
//utility function for finding largest element
int largest_element(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    return arr[n-1];
}
//Brute force solution
int secondLargest(vector<int>&arr,int n){
    int largest = largest_element(arr,n);
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            int secondLargest = arr[i];
            return secondLargest; 
            
        }
    }
    return -1;
}

//Optimal solution
int second_largest(vector<int>&arr,int n){
    int secondLargest = INT_MIN;
    int largest = largest_element(arr,n);
    for(int i= 0;i<n;i++){
        if(secondLargest<arr[i] && arr[i]!=largest){
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}
int main() {
    vector<int> arr  = {4,3,5,6,5};
    int n = arr.size();
    int ans  = second_largest(arr,n);
    cout<<ans;
      return 0;
}