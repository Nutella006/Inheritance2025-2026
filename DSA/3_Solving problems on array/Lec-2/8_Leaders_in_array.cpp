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
    vector<int> leaders(vector<int>& nums) {
      vector<int> leader;
      
      for(int i=0;i<nums.size()-1;i++){
        bool check=true;
       for(int j=i+1;j<nums.size();j++){
        if(nums[j]>nums[i]){
          check=false;
        }
       }
       if(check){
        leader.push_back(nums[i]);
       }
      }
      leader.push_back(nums[nums.size()-1]);
      return leader;
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
   
   vector<int> myvec=s.leaders(v);
    for(int k = 0; k < myvec.size(); k++){
        cout<< myvec[k]<<" ";
    }
    return 0;
}
