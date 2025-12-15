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
    vector<int> majorityElementTwo(vector<int>& nums) {
      vector<int> mymajority;
        int size=nums.size();
        int majority=(size/3);
        int count=0;
         sort(nums.begin(), nums.end());
         for(int i=0;i<nums.size()-1;i++){
           if(nums[i]==nums[i+1]){
                count=count+1;
           }
           else{
               count=count+1;
              if(count>majority){
                mymajority.push_back(nums[i]);
              }
              count=0;
           }
         }
         return mymajority;

    }
};

int main() {
    Solution s;
    vector<int> myvec={1, 2, 1, 1, 3, 2, 2};
   vector<int> v=s.majorityElementTwo(myvec);
   for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
   }

    return 0;
}
