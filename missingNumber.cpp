#include<bits/stdc++.h>
using namespace std;
//brute force
int missing(int arr[],int n){
    for(int i = 1; i<=n ;i++){
        int count = 0;
        for(int j = 0;j<n-1;j++){
            if(arr[j]==i){
                count++;
                break;

            }
        }
        if(count == 0){
            return i;
        }
    }
}
//better solution
int missingNumber(int arr[],int n){
    int numberSum =0;
    for(int i=1;i<=n;i++){
        numberSum+=i;
    }
    int arraySum =0;
    for(int i=0;i<n-1;i++){
        arraySum+=arr[i];
    }
    return numberSum - arraySum;
}

//optimal solution
int missing_number(int arr[],int n){
    int xor1= 0;
    int xor2 =0;
    for(int i=0;i<n-1;i++){
        xor1 = xor1^i;
    }
    for(int i=1;i<n;i++){
        xor2 = xor2^arr[i];
    }
    return xor2^xor1;
}
int main() {
    int arr[]  = {1,2,4,5};
    int n =5;
    int ans = missing_number(arr,n);
    cout<<ans;
      return 0;
}