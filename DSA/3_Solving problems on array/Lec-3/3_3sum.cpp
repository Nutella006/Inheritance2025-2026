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
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> ans;
       
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]){
          continue;
        }
        int j=i+1;
        int k=nums.size()-1;
        while(j<k){
          int sum=nums[i]+nums[j]+nums[k];
          if(sum>0){
              k--;
          }
          else if(sum<0){
              j++;
          }
          else{
             ans.push_back({nums[i],nums[j],nums[k]});
             j++;
             k--;
             while(j<k && nums[j]==nums[j-1]){
              j++;
             }
               while(j<k && nums[k]==nums[k+1]){
              k--;
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
    vector<vector<int>> myvec=s.threeSum(v);
     for(int m=0;m<myvec.size();m++){
     for(int n=0;n<myvec[m].size();n++){
      cout<<myvec[m][n]<<" ";
     }
     cout<<endl;
    }
   
    return 0;
}
