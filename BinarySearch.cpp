#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int start  = 0;
    int end  = n-1;
    while(start<=end){
        int mid  = start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,4,7,9,34,67,467,860};
    int n = 10;
    int ans = binarySearch(arr,n,340);
    if(ans!=-1){
        cout<<"Element is at index :"<<ans;
    }
    else{
        cout<<"Element is not found";
    }
    

  return 0;
}