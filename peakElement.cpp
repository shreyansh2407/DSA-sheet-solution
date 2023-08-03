#include<bits/stdc++.h>
using namespace std;
//brute force solution
// int peakElement(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         if((i==0 || arr[i-1]<arr[i])&& (i==arr.size()-1 || arr[i]>arr[i+1])){
//             return arr[i];
//         }
//     }
// }
//optimal solution
int peakElement(vector<int> &arr){
    int n = arr.size();
    
    //checking for 1 size array
    if(n==1) return arr[0];
    if(arr[0]>arr[1]) return arr[0];//if first element is peak
    if(arr[n-1]>arr[n-2]) return arr[n-1];//if last element is peak
    int low =1;
    int high = n-2;
    while(low<=high){
        int mid = (low+high)/2;
        //if mid is peak
        if((arr[mid]>arr[mid-1])&&(arr[mid]>arr[mid+1])){
            return arr[mid];
        }
        //if left part is sorted then mid is in right part
        else if(arr[mid]>arr[mid-1]){
            low = mid+1;
        }
        //if right part is sorted then mid is in left part
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    
    cout<<peakElement(arr);
  return 0;
}