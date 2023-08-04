#include<bits/stdc++.h>
using namespace std;
//Brute force approach
// int squareRoot(int n){
//     return sqrt(n);
// }
// //better solution
// int squareRoot(int n){
//     int ans =1;
//     for(int i=1;i<=n;i++){
//         if(i*i<=n){
//             ans = i;
//         }
//         else{
//             break;
//         }
//     }
//     return ans;
// }
//optimal solution
int squareRoot(int n){
    int low =1;
    int high = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid*mid>=n){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return high;
}
int main(){
    cout<<squareRoot(6)<<endl;
    
    return 0;
}