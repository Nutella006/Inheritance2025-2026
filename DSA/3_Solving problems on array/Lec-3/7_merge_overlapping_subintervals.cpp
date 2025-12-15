#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
      vector<vector<int>> ans;
      sort(arr.begin(),arr.end());
      for(int i=0;i<arr.size();i++){
        if(ans.empty() || arr[i][0]>ans.back()[1]){
          ans.push_back(arr[i]);
        }
        else{
          ans.back()[1]=max(ans.back()[1],ans[i][1]);
        }
      }
     return ans;
    }
};

int main() {
    Solution s;
    int size;
    cin>>size;
    vector<vector<int>> v(size);
    for(int i=0;i<v.size();i++){
      for(int j=0;j<2;j++){
         cin>>v[i][j];
      }
    
    }
 
   vector<vector<int>> ans=s.mergeOverlap(v);
     for(int k=0;k<v.size();k++)
    {
      for(int l=0;l<v[k].size();l++){
        cout<<v[k][l];
      }
    
    }

   
    return 0;
}
