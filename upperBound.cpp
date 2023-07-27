#include<bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &arr,int x){
    int low  =0;
	int high = arr.size()-1;
	int ans = 	arr.size();
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>x) {
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
     vector<int> arr = {1,2,3,3,7,8,9,9,9,11};
    int x = 9;
    int ans = upperBound(arr,x);
    cout<<ans;
  return 0;
}