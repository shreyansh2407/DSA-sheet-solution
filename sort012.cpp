#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int> &arr,int n){
    int count0=0,count1=0,count2=0;
     n= arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
    for(int i=count0+count1;i<n;i++){
        arr[i]=2;
    }

}
int main() {
    vector<int> arr = {1,2,0,2,0,1,0,2,0,1};
    int n= 10;
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      return 0;
}