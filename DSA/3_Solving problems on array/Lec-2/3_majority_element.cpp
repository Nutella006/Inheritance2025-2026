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
    int majorityElement(vector<int>& nums) {
      int mx = *max_element(nums.begin(), nums.end());
      int hash[mx+1]={0};
        for(int i=0;i<nums.size();i++){
          hash[nums[i]]++;
          if(hash[nums[i]]>(nums.size()/2)){
            return nums[i];
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
   
    cout<< s.majorityElement(v);
    
    return 0;
}