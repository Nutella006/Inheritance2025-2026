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
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> myvec={};
      int j;
        for(int i=0;i<nums.size();i++){
          int sum=0;
          for(j=0;j<nums.size();j++){
            if(i!=j) {
               sum=nums[i]+nums[j];
            if(sum==target){
           myvec.push_back(i);
           myvec.push_back(j);
           return myvec;
          }
            }
           
          }
        
        }
       
        
    }
};
int main() {
    Solution s;
    int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }
    int k;
    cin>>k;

    vector<int> ans= s.twoSum(v,k);
    for(int t = 0; t< 2; t++){
        cout<< ans[t]<<" ";
    }
    return 0;
}