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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>> ans;
       
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]){
          continue;
        }
        for(int j=i+1;j<nums.size();j++){
           if(j>(i+1) && nums[j]==nums[j-1]){
          continue;
        }
         int k=j+1;
        int l=nums.size()-1;
        while(k<l){
          int sum=nums[i]+nums[j]+nums[k];
          sum=sum+nums[l];
          if(sum>target){
              l--;
          }
          else if(sum<target){
              k++;
          }
          else{
             ans.push_back({nums[i],nums[j],nums[k],nums[l]});
             k++;
             l--;
             while(k<l && nums[k]==nums[k-1]){
              k++;
             }
               while(k<l && nums[l]==nums[l+1]){
              l--;
             }

          
          }

        }
       
        }
       }
        return ans;
      
     
    }
};

int main() {
    Solution s;
    int size;
    cin>>size;
    vector<int> v(size);
    for(int i=0;i<v.size();i++){
      cin>>v[i];
    }
    int mytarget;
    cin>>mytarget;
    vector<vector<int>> myvec=s.fourSum(v,mytarget);
     for(int m=0;m<myvec.size();m++){
     for(int n=0;n<myvec[m].size();n++){
      cout<<myvec[m][n]<<" ";
     }
     cout<<endl;
    }
   
    return 0;
}
