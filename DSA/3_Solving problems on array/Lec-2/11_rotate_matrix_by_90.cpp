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
    void rotateMatrix(vector<vector<int>>& matrix) {
      vector<vector<int>> mymatrix=matrix;
        for(int i=matrix.size()-1;i>=0;i--){
          for(int j=0;j<matrix[i].size();j++){
                 mymatrix[j][matrix.size()-1-i]=matrix[i][j];
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
   
   s.rotateMatrix(v);
     for(int t = 0; t < n; t++){
      for(int u=0;u<m;u++){
           cout<<v[t][u]<<" ";
      }
     cout<<endl;

    }
    return 0;
}
