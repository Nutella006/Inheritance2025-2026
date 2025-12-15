#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      vector<vector<int>> mymatrix=matrix;
        for(int i=0;i<matrix.size();i++){
          for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
              for(int k=0;k<mymatrix[i].size();k++){
                mymatrix[i][k]=0;
                
              }
              for(int p=0;p<mymatrix.size();p++){
                mymatrix[p][j]=0;
                
              }

            }
          }
        }
        matrix=mymatrix;
    }
};

int main() {
    Solution s;
    int n,m;
    cin >> n>>m;

    vector<vector<int>> v(n,vector<int>(m));   
    for(int r = 0; r < n; r++){
      for(int s=0;s<m;s++)
        cin >> v[r][s];
    }
   
   s.setZeroes(v);
     for(int t = 0; t < n; t++){
      for(int u=0;u<m;u++){
           cout<<v[t][u]<<" ";
      }
     cout<<endl;

    }
    return 0;
}
