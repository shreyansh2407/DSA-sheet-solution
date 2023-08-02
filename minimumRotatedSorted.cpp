#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr)
{
	// Write your code here.
	int low = 0;
	int high = arr.size()-1;
	int ans = INT_MAX;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[low]<=arr[mid]){
			ans = min(ans,arr[low]);
			low = mid+1;
		}
		else{
			ans = min(ans,arr[mid]);
			high = mid-1;
		}
	}
	return ans;
}
int main() {
    vector<int> arr = {4,5,1,2,3};
    cout<<findMin(arr);
  return 0;
}