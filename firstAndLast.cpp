#include<bits/stdc++.h>
using namespace std;
//brute force solution
vector<int> firstAndLast(vector<int> &arr,int x){
    vector<int> ans;

    int first = -1;
    int last = -1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            if(first==-1) first = i;
            last = i;
        }
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}
//lower bound
int lowerBound(vector<int> &arr,int x){
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
//upper bound
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
    vector<int> arr = {1,2,3,4,7,8,8,8,11};
    int x = 10;
    // vector<int> ans = firstAndLast(arr,x);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    int lb = lowerBound(arr,x);
    if(lb== arr.size() || arr[lb]!=x){
        cout<<"-1 -1";
        
    } 
    else{
        cout<<lb<<" "<<upperBound(arr,x)-1;
    }

  return 0;
}