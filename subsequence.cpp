#include<bits/stdc++.h>
using namespace std;
//utility function for searching
int linearSearch(vector<int> &arr,int target){
        for(int i=0;i<arr.size();i++){
            if(arr[i]==target){
                return 1;
            }
        }
        return 0;
}
//brute force solution
int longest(vector<int> &arr){
        int large =1;
        for(int i=0;i<arr.size();i++){
            int x = arr[i];
            int count = 1;
            while(linearSearch(arr,x+1)){
                x++;
                count++;
            }
            large = max(large,count);
        }
        return large;
}
//optimal solution
int longest(vector<int> &arr){
    sort(arr.begin(),arr.end());
    int count =0;
    int smaller = INT_MIN;
    int largest = 1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]-1==smaller){
            count++;
            smaller = arr[i];
        }
        else if(arr[i]!=smaller){
            smaller = arr[i];
            count =1;
        }
        largest = max(largest,count);
    }
    return largest;
}

int main() {
    vector<int> arr = {3,2,1,100,101,101,102,103,104};
    int ans = longest(arr);
    cout<<ans;
  return 0;
}