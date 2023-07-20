#include<bits/stdc++.h>
using namespace std;
void markRow(vector<vector<int>> &matrix,int i){
    for(int j=0;j<matrix[0].size();j++){
        if(matrix[i][j]!=0){
            matrix[i][j] = -1;
        }
    }
}
void markCol(vector<vector<int>> &matrix,int j){
    for(int i=0;i<matrix.size();i++){
        if(matrix[i][j]!=0){
            matrix[i][j] = -1;
        }
    }
}
//brute force solution
void matrixZero(vector<vector<int>> &matrix){
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    markRow(matrix,i);
                    markCol(matrix,j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
       
}

//better solution
void matrix0(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int row[n] ={0};
    int col[m] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                matrix[i][j]=0;
            }
        }
    }
}
int main() {
    vector<vector<int>> matrix = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
    matrix0(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
  return 0;
}