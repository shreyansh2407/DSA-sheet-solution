#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int target){
    
    
   
    if(start>end) return -1;
    int mid = start+ (end-start)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) return binarySearch(arr,start,mid-1,target);
    else return binarySearch(arr,mid+1,end,target);

}
int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int ans = binarySearch(arr,0,n-1,4);
    cout<<ans;

  return 0;
}