#include<bits/stdc++.h>
using namespace std;
void zeroes(vector<int> &arr){
        int j = 0;
        for(int i=0;i<arr.size();i++){
           if(arr[i]!=0){
            arr[j++] = arr[i];
           }
        }
        for(int i = j;i<arr.size();i++){
            arr[i] = 0; 
        }
}
int main() {
    vector<int> arr = {1,2,0,4,5,0,0,4,5,0,0,7};
    zeroes(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
      return 0;
}