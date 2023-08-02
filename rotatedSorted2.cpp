#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int n, int k)
{
    
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k) return true;
        //edge case
        if(arr[mid]==arr[low] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        //left part sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<=k && k<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        //right part sorted
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return false;
}
int main() {
    vector<int> arr = {3,3,3,3,3,3,3,3};
    int n = arr.size();
    int k = 3;
    cout<<search(arr,n,k);
  return 0;
}