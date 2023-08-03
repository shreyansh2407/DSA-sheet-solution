#include<bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr){
    // Write your code here.   
    int ans = INT_MAX;  
    int low = 0;
    int high = arr.size()-1;
    int index = -1;
    while(low<=high){
        int mid = (low+high)/2;
        
        if(arr[low]<=arr[high]){
            if(arr[low]<ans){
                ans = arr[low];
                index = low;
            }
            break;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                ans = arr[low];
                index = low;
            }
            low = mid+1;
        }
        else{
             if (arr[mid] < ans) {

                index = mid;
                ans = arr[mid];
            }

            
            high = mid - 1;
        }
    } 
    return index;
}
int main() {
    vector<int> arr = {4,5,1,2,3};
    cout<<findKRotation(arr);
  return 0;
}