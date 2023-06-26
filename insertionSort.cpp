#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main() {
    int arr[8] = {4,6,8,1,3,5,7,2};
    int n=8;
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      return 0;
}