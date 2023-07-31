#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr,int x){
    int low = 0;
    int high  =  arr.size()-1;
    int ans = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x) {
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,9};
    int x = 8;
    int ans = searchInsert(arr,x);
    cout<<ans;
  return 0;
}