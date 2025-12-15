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
  vector<int> found;
public:

   void myindex(vector<int>& nums,int low,int high,int target){
    
    if(low==high){
      if(nums[low]==target){
       found.push_back(low);
       return;
      }
      else{
        return;
      }
      
    }
   int mid=(low+high)/2;
   if(found.size()==0){
   myindex(nums,low,mid,target);
   myindex(nums,mid+1,high,target);
    
   }

   }
    int linearSearch(vector<int>& nums, int target) {
      myindex(nums,0,nums.size()-1,target);
      if(found.size()==0){
        return -1;
      }
      else{
        return found[0];
      }
      
    }
};



int main(){
    int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }
    int targets;
    cin>>targets;

    Solution s;

       cout<<s.linearSearch(v,targets);

}
