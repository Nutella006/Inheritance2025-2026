#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> myvec;
      int m=matrix.size();
      int n=matrix[0].size();
      int top=0;
      int left=0;
      int bottom=m-1;
      int right=n-1;
      while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
             myvec.push_back(matrix[top][i]);
        }
        top++;
         for(int i=top;i<=bottom;i++){
             myvec.push_back(matrix[i][right]);
        }
        right--;
        for(int i=right;i>=left;i--){
             myvec.push_back(matrix[bottom][i]);
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
             myvec.push_back(matrix[i][left]);
        }
        left++;

      }
      return myvec;
    }
};


int main() {
    Solution s;
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));
    for (int r = 0; r < n; r++)
        for (int c = 0; c < m; c++)
            cin >> v[r][c];

    vector<int> spiral = s.spiralOrder(v);

    for (int x : spiral)
        cout << x << " ";
    cout << endl;
}
