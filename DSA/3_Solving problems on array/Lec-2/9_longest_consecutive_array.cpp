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
    int longestConsecutive(vector<int>& nums) {
      int count=1;

      int maxcons=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
          if(nums[i+1]==(nums[i]+1)){
            count=count+1;

          }
          else if(nums[i+1]==nums[i]){
            continue;
          }
          else{
            if(maxcons<count){
              maxcons=count;
            }
            count=1;
          }
          if(i==nums.size()-2){
            if(maxcons<count){
              maxcons=count;
            }
          }
        }
        return maxcons;
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
   
   cout<<s.longestConsecutive(v);
    return 0;
}
