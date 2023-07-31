#include<bits/stdc++.h>
using namespace std;
int floor(vector<int> &arr,int x){
    int low = 0;
    int high = arr.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=x){
            ans = arr[mid];
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int ceil(vector<int> arr,int x){
    int low = 0;
    int high = arr.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = arr[mid];
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr  = {10,20,30,40,50};
    int x =25;
    int floorValue = floor(arr,x);
    cout<<floorValue;
    int ceilValue = ceil(arr,x);
    cout<<ceilValue;
  return 0;
}