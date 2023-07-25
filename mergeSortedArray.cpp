#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int n,int m){
    int left = n-1;
    int right =0;
    while(left>=0 && right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}
int main() {
    int arr1[] = {1,2,6,7,8};
    int arr2[] = {3,5,9};
    int n=5,m=3;
    merge(arr1,arr2,n,m);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}