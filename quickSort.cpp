#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
        int pivot = arr[low];
        int i = low;
        int j = high;
        while(i<j){
            while(arr[i]<=pivot && i<=high-1){
                i++;
            }
            while(arr[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }

        }
        swap(arr[low],arr[j]);
        return j;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int partitionIndex = partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
int main() {
    int arr[] = {4,6,2,5,7,9,1,3};
    int n = 8;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      return 0;
}