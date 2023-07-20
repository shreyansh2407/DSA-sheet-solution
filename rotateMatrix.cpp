#include<bits/stdc++.h>
using namespace std;
//Brute force solution
// void rotate(int matrix[4][4],int n,int m,int ans[4][4]){
    
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 ans[j][n-i-1] = matrix[i][j]; 
//             }
//         }
        
        
// }

//optimal solution
void rotate(int matrix[4][4],int n,int m){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(i==j){
                
                continue;
            }
            else{
                swap(matrix[j][i],matrix[i][j]);
            }
        }
    }
   for(int i=0;i<n;i++){
        int low = 0;
        int high = n-1;
        
   }
}
int main() {
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n =4;
    int m=4;
    rotate(matrix,4,4);
    // int ans[4][4] = {0};
    // rotate(matrix,4,4,ans);

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
  return 0;
}