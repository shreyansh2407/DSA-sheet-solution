#include<bits/stdc++.h>
using namespace std;
//Brute force solution
pair<int,int> missingAndRepeating(vector<int> &arr,int n){
    int repeating =-1;
    int missing  =-1;
    pair<int,int> ans;
    for(int i=1;i<=n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                count++;
            }
        }
        if(count==2) repeating = i;
        if(count==0) missing = i;
        if(repeating!=-1 && missing != -1){
            break;
        }
    }
    ans.first = repeating;
    ans.second = missing;
    return ans;
}
//better solutio
vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        int hasharr[n+1]={0};
        for(int i=0;i<n;i++){
            hasharr[arr[i]]++;
        }
       int repeating =-1;
       int missing  =-1;
       for(int i=1;i<=n;i++){
           if(hasharr[i]==2){
               repeating =i;
               
           }
           else if(hasharr[i]==0){
               missing = i;
               
           }
           if(repeating != -1 && missing != -1){
               break;
           }
       }
       return {repeating,missing};
    }

//Optimal approach
vector<int> missingAndRepeating(vector<int> &arr){
    long long n = arr.size();
    long long sn = n*(n+1)/2;
    long long s2n  = n*(2*n+1)*(n+1)/6;
    long long s =0;
    long long s2 =0;

    for(int i=0;i<n;i++){
        s+=arr[i];
        s2+=pow((arr[i]),2);
    }
    long long val1= s - sn;
    long long val2 = s2 - s2n;
    val2 = val2/val1;
    int x  = (val1+val2)/2;
    int y = x-val1;
    return {x,y};

}
int main() {
    vector<int> arr = {6,4,4,3,2,1};
    int n = 6;
    // pair<int,int> ans = missingAndRepeating(arr,n);
    // cout<<ans.first << " " << ans.second;
    vector<int> ans = missingAndRepeating(arr);
    cout<< ans[0] <<" " <<ans[1];
  return 0;
}